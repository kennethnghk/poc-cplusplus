# Get the GCC preinstalled image from Docker Hub
FROM gcc:latest

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . /usr/src/app

# Specify the working directory
WORKDIR /usr/src/app

# Use GCC to compile the *.cpp source file
RUN g++ -o main examples/*.cpp 

# Run the program output from the previous step
CMD ["./main"]