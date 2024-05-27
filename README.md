# GameDev: 3D Renderer Assignment 2

## Description
This project implements a 3D vector manipulation library in C++. It provides various functionalities for performing operations on 3D vectors, including scalar multiplication, division, vector addition, subtraction, dot product, cross product, vector reversal, modulus calculation, angle calculation, rotation, and more.

## Author
- Name: Yash Pathak
- Roll No.: 231188

## Functions

1. **Scalar Multiplication**
   - Description: Performs scalar multiplication on a 3D vector.
   - Method: `scalar_multiplication`
   - Usage: `Vector3D scalar_multiplication(float s)`

2. **Scalar Division**
   - Description: Performs scalar division on a 3D vector.
   - Method: `scalar_division`
   - Usage: `Vector3D scalar_division(float s)`

3. **Vector Addition**
   - Description: Adds two 3D vectors together.
   - Method: `vector_addition`
   - Usage: `Vector3D vector_addition(const Vector3D& vector2)`

4. **Vector Subtraction**
   - Description: Subtracts one 3D vector from another.
   - Method: `vector_subtraction`
   - Usage: `Vector3D vector_subtraction(const Vector3D& vector2)`

5. **Dot Product**
   - Description: Calculates the dot product of two 3D vectors.
   - Method: `dot_product`
   - Usage: `ft dot_product(const Vector3D& vector2)`

6. **Vector Product (Cross Product)**
   - Description: Calculates the cross product of two 3D vectors.
   - Method: `vector_product`
   - Usage: `Vector3D vector_product(const Vector3D& vector2)`

7. **Reverse Direction**
   - Description: Reverses the direction of a 3D vector.
   - Method: `reverse_direction`
   - Usage: `Vector3D reverse_direction()`

8. **Component Multiplication**
   - Description: Multiplies corresponding components of two 3D vectors.
   - Method: `component_multiplication`
   - Usage: `Vector3D component_multiplication(const Vector3D& vector2)`

9. **Modulus Calculation**
   - Description: Calculates the modulus (length) of a 3D vector.
   - Method: `modulus`
   - Usage: `ft modulus()`

10. **Scalar Triple Product**
    - Description: Calculates the scalar triple product of three 3D vectors.
    - Method: `scalar_triple_product`
    - Usage: `ft scalar_triple_product(const Vector3D& vector2, const Vector3D& vector3)`

11. **Unit Vector**
    - Description: Calculates the unit vector of a 3D vector.
    - Method: `unit_vector`
    - Usage: `Vector3D unit_vector()`

12. **Polar Representation of Vector**
    - Description: Calculates the polar representation of a 3D vector.
    - Method: `vector_generator`
    - Usage: `Vector_Generator vector_generator()`

13. **Angle Between Vectors**
    - Description: Calculates the angle between two 3D vectors.
    - Method: `angle_vectors`
    - Usage: `ft angle_vectors(const Vector3D& vector2)`

14. **Intersection Point of Vector and Plane**
    - Description: Calculates the intersection point of a 3D vector and a plane.
    - Method: `intersectionof_vectorandplanes`
    - Usage: `Vector3D intersectionof_vectorandplanes(const Vector_Generator& vector2)`

15. **Vector Triple Product**
    - Description: Calculates the vector triple product of three 3D vectors.
    - Method: `vector_triple_product`
    - Usage: `Vector3D vector_triple_product(const Vector3D& X, const Vector3D& Y)`

16. **Rotation About X Axis**
    - Description: Rotates a 3D vector about the X-axis by 
