#include <bits/stdc++.h>
using namespace std;
typedef float ft;

class Vector_Generator {
public:
    float x;
    float y;
    float z;
    float a;
    Vector_Generator(ft x, ft y, ft z, ft a) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->a = a;
    }
};

class Vector3D {
    float x;
    float y;
    float z;

public:
    Vector3D(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vector3D scalar_multiplication(float s) {
        return Vector3D(this->x * s, this->y * s, this->z * s);
    }
    Vector3D scalar_division(float s) {
        return Vector3D(this->x / s, this->y / s, this->z / s);
    }
    Vector3D vector_addition(Vector3D vector2) {
        return Vector3D(this->x + vector2.x, this->y + vector2.y, this->z + vector2.z);
    }
    Vector3D vector_subtraction(Vector3D vector2) {
        return Vector3D(this->x - vector2.x, this->y - vector2.y, this->z - vector2.z);
    }
    ft dot_product(Vector3D vector2) {
        return (this->x * vector2.x + this->y * vector2.y + this->z * vector2.z);
    }
    Vector3D vector_product(Vector3D vector2) {
        return Vector3D(this->y * vector2.z - this->z * vector2.y, this->z * vector2.x - this->x * vector2.z, this->x * vector2.y - this->y * vector2.x);
    }
    Vector3D reverse_direction(void) {
        return Vector3D(-1 * this->x, -1 * this->y, -1 * this->z);
    }
    Vector3D component_multiplication(Vector3D vector2) {
        return Vector3D(this->x * vector2.x, this->y * vector2.y, this->z * vector2.z);
    }
    ft modulus(void) {
        return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    }
    ft scalar_triple_product(Vector3D vector2, Vector3D vector3) {
        return ((vector2.y * vector3.z - vector2.z * vector3.y) * this->x + (vector2.z * vector3.x - vector2.x * vector3.z) * this->y + (vector2.x * vector3.y - vector2.y * vector3.x) * this->z);
    }
    Vector3D unit_vector() {
        float mod = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
        return Vector3D(this->x / mod, this->y / mod, this->z / mod);
    }
    Vector_Generator vector_generator() {
        float mod = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
        return Vector_Generator(mod, 57.3248408 * acos(this->x / mod), 57.3248408 * acos(this->y / mod), 57.3248408 * acos(this->z / mod));
    }
    ft angle_vectors(Vector3D vector2) {
        return (57.3248408 * acos((this->x * vector2.x + this->y * vector2.y + this->z * vector2.z) /vector2.modulus() * sqrt(this->x * this->x + this->y * this->y + this->z * this->z)));
    }
    Vector3D intersectionof_vectorandplanes(Vector_Generator vector2) { // assuming that equation of plane is xx+yy+zz=a
        return Vector3D(this->x * vector2.a / (vector2.x * this->x + vector2.y * this->y + vector2.z * this->z), this->y * vector2.a / (vector2.x * this->x + vector2.y * this->y + vector2.z * this->z), this->z * vector2.a / (vector2.x * this->x + vector2.y * this->y + vector2.z * this->z));
    }
    Vector3D vector_triple_product(Vector3D X, Vector3D Y) { // assuming vector product of form x*(x1*y1);
        return Vector3D(dot_product(Y) * X.x - dot_product(X) * Y.x, dot_product(Y) * X.y - dot_product(X) * Y.y, dot_product(Y) * X.z - dot_product(X) * Y.z);
    }
    Vector3D x_rotation(ft angle) { // angle should be in radians;
        return Vector3D(this->x, this->y * cos(angle) - this->z * sin(angle), this->y * sin(angle) + this->z * cos(angle));
    }
    Vector3D y_rotation(ft angle) {
        return Vector3D(this->x * cos(angle) + this->z * sin(angle), this->y, this->z * cos(angle) - this->x * sin(angle));
    }
    Vector3D z_rotation(ft angle) {
        return Vector3D(this->x * cos(angle) - this->y * sin(angle), this->x * sin(angle) + this->y * cos(angle), this->z);
    }
    void print(void) {
        cout << "Answer is : " << this->x << "," << this->y << "," << this->z << endl;
    }
    // Operator Overloading
    Vector3D operator+(Vector3D vector2) {
        return Vector3D(this->x + vector2.x, this->y + vector2.y, this->z + vector2.z);
    }
    Vector3D operator-(Vector3D vector2) {
        return Vector3D(this->x - vector2.x, this->y - vector2.y, this->z - vector2.z);
    }
    Vector3D operator*(Vector3D vector2) {
        return Vector3D(this->x * vector2.x, this->y * vector2.y, this->z * vector2.z);
    }
    Vector3D projection_along_vector(Vector3D vector2) {
        ft angle = angle_vectors(vector2);
        return Vector3D(cos(angle) * this->x, cos(angle) * this->y, this->z * cos(angle));
    }
    Vector3D projection_perpendicular_vector(Vector3D vector2) {
        ft angle = angle_vectors(vector2);
        return Vector3D(sin(angle) * this->x, sin(angle) * this->y, this->z * sin(angle));
    }
};

Vector3D readVector() {
    float x, y, z;
    char comma;
    cin >> x >> comma >> y >> comma >> z;
    return Vector3D(x, y, z);
}

int main() {
    int a;
    float s, angle;
    cout << "What do you want to do ?" << endl << "Enter corresponding serial number corresponding to operation you want to perform." << endl;
    cout << "1. Scalar Multiplication" << endl << "2. Scalar Division\n3. Vector Addition \n4. Vector Subtraction \n5. Dot Product" << endl;
    cout << "6. Vector Product\n7. Reverse Direction\n8. Component Multiplication\n9. Modulus\n10. Scalar Triple Product\n11. Unit Vector" << endl;
    cout << "12. Polar Representation of Vector\n13. Angle between vectors\n14. Intersection point of vector and plane\n15. Vector Triple Product" << endl;
    cout << "16. Rotation about X axis\n17. Rotation about Y axis\n18. Rotation about Z axis" << endl;
    cin >> a;

    Vector3D vector1(0, 0, 0);
    Vector3D vector2(0, 0, 0);
    Vector3D vector3(0, 0, 0);
    Vector3D result(0, 0, 0);
    float result_scalar;

    switch(a) {
        case 1:
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the scalar value: ";
            cin >> s;
            result = vector1.scalar_multiplication(s);
            result.print();
            break;
        case 2:
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the scalar value: ";
            cin >> s;
            result = vector1.scalar_division(s);
            result.print();
            break;
        case 3:
            cout << "Enter the components of the first vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components of the second vector (x, y, z): ";
            vector2 = readVector();
            result = vector1.vector_addition(vector2);
            result.print();
            break;
        case 4:
            cout << "Enter the components of the first vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components of the second vector (x, y, z): ";
            vector2 = readVector();
            result = vector1.vector_subtraction(vector2);
            result.print();
            break;
        case 5:
            cout << "Enter the components of the first vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components of the second vector (x, y, z): ";
            vector2 = readVector();
            result_scalar = vector1.dot_product(vector2);
            cout << "Dot Product is : " << result_scalar << endl;
            break;
        case 6:
            cout << "Enter the components of the first vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components of the second vector (x, y, z): ";
            vector2 = readVector();
            result = vector1.vector_product(vector2);
            result.print();
            break;
        case 7:
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            result = vector1.reverse_direction();
            result.print();
            break;
        case 8:
            cout << "Enter the components of the first vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components of the second vector (x, y, z): ";
            vector2 = readVector();
            result = vector1.component_multiplication(vector2);
            result.print();
            break;
        case 9:
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            result_scalar = vector1.modulus();
            cout << "Modulus is : " << result_scalar << endl;
            break;
        case 10:
            cout << "Enter the components of the first vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components of the second vector (x, y, z): ";
            vector2 = readVector();
            cout << "Enter the components of the third vector (x, y, z): ";
            vector3 = readVector();
            result_scalar = vector1.scalar_triple_product(vector2, vector3);
            cout << "Scalar Triple Product is : " << result_scalar << endl;
            break;
        case 11:
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            result = vector1.unit_vector();
            result.print();
            break;
        case 12: {
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            Vector_Generator vg = vector1.vector_generator();
            cout << "Polar Representation is : " << vg.x << ", " << vg.y << ", " << vg.z << ", " << vg.a << endl;
            break;
        }
        case 13:
            cout << "Enter the components of the first vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components of the second vector (x, y, z): ";
            vector2 = readVector();
            result_scalar = vector1.angle_vectors(vector2);
            cout << "Angle between vectors is : " << result_scalar << " degrees" << endl;
            break;
        case 14: {
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components and constant of the plane (a, b, c, d): ";
            float a, b, c, d;
            char comma;
            cin >> a >> comma >> b >> comma >> c >> comma >> d;
            Vector_Generator vg = Vector_Generator(a, b, c, d);
            result = vector1.intersectionof_vectorandplanes(vg);
            result.print();
            break;
        }
        case 15:
            cout << "Enter the components of the first vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the components of the second vector (x, y, z): ";
            vector2 = readVector();
            cout << "Enter the components of the third vector (x, y, z): ";
            vector3 = readVector();
            result = vector1.vector_triple_product(vector2, vector3);
            result.print();
            break;
        case 16:
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the angle in radians: ";
            cin >> angle;
            result = vector1.x_rotation(angle);
            result.print();
            break;
        case 17:
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the angle in radians: ";
            cin >> angle;
            result = vector1.y_rotation(angle);
            result.print();
            break;
        case 18:
            cout << "Enter the components of the vector (x, y, z): ";
            vector1 = readVector();
            cout << "Enter the angle in radians: ";
            cin >> angle;
            result = vector1.z_rotation(angle);
            result.print();
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
