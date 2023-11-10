import cv2
import numpy as np

def image_to_dots_opencv(input_image_path, output_image_path, input_dot_size=5, output_dot_size=10, scale_factor=2):
    # Read the image using OpenCV
    image = cv2.imread(input_image_path)

    # Get the height and width of the image
    height, width, _ = image.shape

    # Calculate the new dimensions
    new_width = int(width * scale_factor)
    new_height = int(height * scale_factor)

    # Create a white image with the new dimensions
    new_image = np.ones((new_height, new_width, 3), np.uint8) * 255

    # List to store the positions of colored dots
    colored_dot_positions = []

    # Loop through each pixel and convert it into dots
    for x in range(0, width, input_dot_size):
        for y in range(0, height, input_dot_size):
            # Get the color of the current pixel
            pixel_color = tuple(map(int, image[y, x]))

            # Calculate the position of the dot in the new image
            new_x = int(x * scale_factor)
            new_y = int(y * scale_factor)

            # Draw a dot with the same color at the new position
            cv2.rectangle(new_image, (new_x, new_y), (new_x + output_dot_size, new_y + output_dot_size), pixel_color, -1)

            # Check if the pixel is colored (not white)
            if pixel_color != (255, 255, 255):
                colored_dot_positions.append((new_x, new_y, pixel_color))

    # Print the positions of colored dots
    print("Positions of Colored Dots:")
    for position in colored_dot_positions:
        print(position)

    # Save the new image
    cv2.imwrite(output_image_path, new_image)

if __name__ == "__main__":
    input_image_path = "bluecircle.png"  # Replace with the path to your image
    output_image_path = "bluecircledots.png"  # Replace with the desired output path
    input_dot_size = 5  # Adjust the input dot size as needed
    output_dot_size = 25  # Adjust the output dot size as needed
    scale_factor = 10  # Adjust the scale factor as needed

    image_to_dots_opencv(input_image_path, output_image_path, input_dot_size, output_dot_size, scale_factor)
