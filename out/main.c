#include <SDL2/SDL_image.h>
#include "../core/SDLHelper.h"
#include <math.h>
#include <carp_debug.h>
#include <carp_pattern.h>
#include <carp_system.h>
#include <carp_io.h>
#include <carp_string.h>
#include <carp_bool.h>
#include <carp_char.h>
#include <carp_float.h>
#include <carp_double.h>
#include <carp_long.h>
#include <carp_int.h>
#include <core.h>

//Types:

// Depth 51
typedef Array Array__SDL_Event;

// Depth 51
typedef Array Array__String;

// Depth 51
typedef Array Array__char;

// Depth 51
typedef Array Array__double;

// Depth 51
typedef Array Array__int;

// Depth 101
typedef struct {
    union {
    struct {
        bool member0;
    } Just;
    struct {
    } Nothing;
    };
    char _tag;
} Maybe__bool;
#define Maybe__bool_Just_tag 0
#define Maybe__bool_Nothing_tag 1

// Depth 101
typedef struct {
    union {
    struct {
        double member0;
    } Just;
    struct {
    } Nothing;
    };
    char _tag;
} Maybe__double;
#define Maybe__double_Just_tag 0
#define Maybe__double_Nothing_tag 1

// Depth 101
typedef struct {
    union {
    struct {
        int member0;
    } Just;
    struct {
    } Nothing;
    };
    char _tag;
} Maybe__int;
#define Maybe__int_Just_tag 0
#define Maybe__int_Nothing_tag 1

// Depth 101
typedef struct {
    int x;
    int y;
    bool left;
    bool right;
} MouseState;

// Depth 101
typedef struct {
    double x;
    double y;
} Vector2__double;

// Depth 101
typedef struct {
    double x;
    double y;
    double z;
} Vector3__double;

// Depth 102
typedef struct {
    SDL_Texture* player;
} Art;

// Depth 102
typedef bool(*Fn__LambdaEnv_bool_bool)(LambdaEnv, bool);

// Depth 102
typedef int(*Fn__LambdaEnv_int_int)(LambdaEnv, int);

// Depth 102
typedef String(*Fn__Pattern_MUL__String_MUL__String_MUL__int_String)(Pattern*, String*, String*, int);

// Depth 102
typedef bool(*Fn__Pattern_MUL__String_MUL__bool)(Pattern*, String*);

// Depth 102
typedef int(*Fn__Pattern_MUL__String_MUL__int)(Pattern*, String*);

// Depth 102
typedef Pattern(*Fn__String_MUL__Pattern)(String*);

// Depth 102
typedef String(*Fn__String_MUL__String)(String*);

// Depth 102
typedef String(*Fn__String_MUL__String_MUL__String)(String*, String*);

// Depth 102
typedef bool(*Fn__String_MUL__String_MUL__bool)(String*, String*);

// Depth 102
typedef char*(*Fn__String_MUL__char_MUL_)(String*);

// Depth 102
typedef int(*Fn__String_MUL__char_int)(String*, char);

// Depth 102
typedef int(*Fn__String_MUL__int)(String*);

// Depth 102
typedef String(*Fn__String_MUL__int_String)(String*, int);

// Depth 102
typedef void(*Fn__String_MUL__int_String_MUL__void)(String*, int, String*);

// Depth 102
typedef char(*Fn__String_MUL__int_char)(String*, int);

// Depth 102
typedef void(*Fn__String_MUL__int_char_void)(String*, int, char);

// Depth 102
typedef String(*Fn__String_MUL__int_int_String)(String*, int, int);

// Depth 102
typedef String(*Fn__String_String)(String);

// Depth 102
typedef String(*Fn__String_String_String)(String, String);

// Depth 102
typedef char(*Fn___char)();

// Depth 102
typedef double(*Fn___double)();

// Depth 102
typedef int(*Fn___int)();

// Depth 102
typedef long(*Fn___long)();

// Depth 102
typedef void(*Fn___void)();

// Depth 102
typedef bool(*Fn__bool_MUL__bool)(bool*);

// Depth 102
typedef String(*Fn__bool_String)(bool);

// Depth 102
typedef bool(*Fn__bool_bool)(bool);

// Depth 102
typedef bool(*Fn__bool_bool_bool)(bool, bool);

// Depth 102
typedef char(*Fn__char_MUL__char)(char*);

// Depth 102
typedef void(*Fn__char_MUL__char_MUL__void)(char*, char*);

// Depth 102
typedef bool(*Fn__char_bool)(char);

// Depth 102
typedef bool(*Fn__char_char_bool)(char, char);

// Depth 102
typedef int(*Fn__char_int)(char);

// Depth 102
typedef double(*Fn__double_MUL__double)(double*);

// Depth 102
typedef String(*Fn__double_String)(double);

// Depth 102
typedef bool(*Fn__double_bool)(double);

// Depth 102
typedef double(*Fn__double_double)(double);

// Depth 102
typedef double(*Fn__double_double_MUL__double)(double, double*);

// Depth 102
typedef bool(*Fn__double_double_bool)(double, double);

// Depth 102
typedef double(*Fn__double_double_double)(double, double);

// Depth 102
typedef double(*Fn__double_double_double_double)(double, double, double);

// Depth 102
typedef float(*Fn__double_float)(double);

// Depth 102
typedef int(*Fn__double_int)(double);

// Depth 102
typedef long(*Fn__double_long)(double);

// Depth 102
typedef float(*Fn__float_MUL__float)(float*);

// Depth 102
typedef String(*Fn__float_String)(float);

// Depth 102
typedef double(*Fn__float_double)(float);

// Depth 102
typedef bool(*Fn__float_float_bool)(float, float);

// Depth 102
typedef float(*Fn__float_float_float)(float, float);

// Depth 102
typedef int(*Fn__float_int)(float);

// Depth 102
typedef int(*Fn__int_MUL__int)(int*);

// Depth 102
typedef int(*Fn__int_MUL__int_MUL__int)(int*, int*);

// Depth 102
typedef String(*Fn__int_String)(int);

// Depth 102
typedef String*(*Fn__int_String_MUL_)(int);

// Depth 102
typedef bool(*Fn__int_bool)(int);

// Depth 102
typedef char(*Fn__int_char)(int);

// Depth 102
typedef String(*Fn__int_char_String)(int, char);

// Depth 102
typedef double(*Fn__int_double)(int);

// Depth 102
typedef float(*Fn__int_float)(int);

// Depth 102
typedef int(*Fn__int_int)(int);

// Depth 102
typedef bool(*Fn__int_int_bool)(int, int);

// Depth 102
typedef int(*Fn__int_int_int)(int, int);

// Depth 102
typedef long(*Fn__int_long)(int);

// Depth 102
typedef void(*Fn__int_void)(int);

// Depth 102
typedef long(*Fn__long_MUL__long)(long*);

// Depth 102
typedef String(*Fn__long_String)(long);

// Depth 102
typedef bool(*Fn__long_bool)(long);

// Depth 102
typedef double(*Fn__long_double)(long);

// Depth 102
typedef int(*Fn__long_int)(long);

// Depth 102
typedef bool(*Fn__long_long_bool)(long, long);

// Depth 102
typedef long(*Fn__long_long_long)(long, long);

// Depth 102
typedef struct {
    SDL_Window* window;
    SDL_Renderer* renderer;
    int fps;
} SDLApp;

// Depth 102
typedef struct {
    int n;
    Array__double v;
} VectorN__double;

// Depth 103
typedef int(*Fn__Array__SDL_Event_MUL__int)(Array__SDL_Event*);

// Depth 103
typedef SDL_Event*(*Fn__Array__SDL_Event_MUL__int_SDL_Event_MUL_)(Array__SDL_Event*, int);

// Depth 103
typedef Array__SDL_Event(*Fn__Array__SDL_Event_SDL_Event_Array__SDL_Event)(Array__SDL_Event, SDL_Event);

// Depth 103
typedef String(*Fn__Array__String_MUL__String)(Array__String*);

// Depth 103
typedef int(*Fn__Array__String_MUL__int)(Array__String*);

// Depth 103
typedef Array__String(*Fn__Array__String_MUL__int_Array__String)(Array__String*, int);

// Depth 103
typedef String*(*Fn__Array__String_MUL__int_String_MUL_)(Array__String*, int);

// Depth 103
typedef void(*Fn__Array__String_MUL__int_String_void)(Array__String*, int, String);

// Depth 103
typedef Array__String(*Fn__Array__String_MUL__int_int_Array__String)(Array__String*, int, int);

// Depth 103
typedef Array__String(*Fn__Array__String_String_Array__String)(Array__String, String);

// Depth 103
typedef Array__char(*Fn__Array__char_Array__char)(Array__char);

// Depth 103
typedef Pattern(*Fn__Array__char_MUL__Pattern)(Array__char*);

// Depth 103
typedef String(*Fn__Array__char_MUL__String)(Array__char*);

// Depth 103
typedef int(*Fn__Array__char_MUL__int)(Array__char*);

// Depth 103
typedef char*(*Fn__Array__char_MUL__int_char_MUL_)(Array__char*, int);

// Depth 103
typedef void(*Fn__Array__char_MUL__int_char_void)(Array__char*, int, char);

// Depth 103
typedef Array__char(*Fn__Array__char_MUL__int_int_Array__char)(Array__char*, int, int);

// Depth 103
typedef Array__char(*Fn__Array__char_char_Array__char)(Array__char, char);

// Depth 103
typedef int(*Fn__Array__double_MUL__int)(Array__double*);

// Depth 103
typedef double*(*Fn__Array__double_MUL__int_double_MUL_)(Array__double*, int);

// Depth 103
typedef void(*Fn__Array__double_MUL__int_double_void)(Array__double*, int, double);

// Depth 103
typedef int(*Fn__Array__int_MUL__int)(Array__int*);

// Depth 103
typedef int*(*Fn__Array__int_MUL__int_int_MUL_)(Array__int*, int);

// Depth 103
typedef void(*Fn__Array__int_MUL__int_int_void)(Array__int*, int, int);

// Depth 103
typedef char(*Fn__FILE_MUL__char)(FILE*);

// Depth 103
typedef void(*Fn__FILE_MUL__void)(FILE*);

// Depth 103
typedef Array__String(*Fn__Fn__String_MUL__String_MUL__Array__String_MUL__Array__String)(Lambda*, Array__String*);

// Depth 103
typedef Array__double(*Fn__Fn__double_MUL__double_MUL__Array__double_MUL__Array__double)(Lambda*, Array__double*);

// Depth 103
typedef double(*Fn__Fn__double_double_MUL__double_MUL__double_Array__double_MUL__double)(Lambda*, double, Array__double*);

// Depth 103
typedef SDL_Renderer*(*Fn__LambdaEnv_SDL_Renderer_MUL__SDL_Renderer_MUL_)(LambdaEnv, SDL_Renderer*);

// Depth 103
typedef SDL_Texture*(*Fn__LambdaEnv_SDL_Texture_MUL__SDL_Texture_MUL_)(LambdaEnv, SDL_Texture*);

// Depth 103
typedef SDL_Window*(*Fn__LambdaEnv_SDL_Window_MUL__SDL_Window_MUL_)(LambdaEnv, SDL_Window*);

// Depth 103
typedef Maybe__bool(*Fn__Maybe__double_Fn__double_bool_Maybe__bool)(Maybe__double, Lambda);

// Depth 103
typedef Maybe__double(*Fn__Maybe__double_Fn__double_double_Maybe__double)(Maybe__double, Lambda);

// Depth 103
typedef Array__int(*Fn__Pattern_MUL__String_MUL__Array__int)(Pattern*, String*);

// Depth 103
typedef int(*Fn__SDL_Color_MUL__int)(SDL_Color*);

// Depth 103
typedef bool(*Fn__SDL_EventType_SDL_EventType_bool)(SDL_EventType, SDL_EventType);

// Depth 103
typedef SDL_EventType(*Fn__SDL_Event_MUL__SDL_EventType)(SDL_Event*);

// Depth 103
typedef SDL_Keycode(*Fn__SDL_Event_MUL__SDL_Keycode)(SDL_Event*);

// Depth 103
typedef bool(*Fn__SDL_Event_MUL__bool)(SDL_Event*);

// Depth 103
typedef bool(*Fn__SDL_Keycode_SDL_Keycode_bool)(SDL_Keycode, SDL_Keycode);

// Depth 103
typedef String(*Fn__SDL_Keycode_String)(SDL_Keycode);

// Depth 103
typedef int(*Fn__SDL_Keycode_int)(SDL_Keycode);

// Depth 103
typedef int*(*Fn__SDL_Point_MUL__int_MUL_)(SDL_Point*);

// Depth 103
typedef int*(*Fn__SDL_Rect_MUL__int_MUL_)(SDL_Rect*);

// Depth 103
typedef SDL_Renderer*(*Fn__SDL_Renderer_MUL__MUL__SDL_Renderer_MUL_)(SDL_Renderer**);

// Depth 103
typedef void(*Fn__SDL_Renderer_MUL__SDL_Color_MUL__void)(SDL_Renderer*, SDL_Color*);

// Depth 103
typedef SDL_Renderer*(*Fn__SDL_Renderer_MUL__SDL_Renderer_MUL_)(SDL_Renderer*);

// Depth 103
typedef void(*Fn__SDL_Renderer_MUL__SDL_Texture_MUL__SDL_Rect_MUL__SDL_Rect_MUL__double_SDL_Point_MUL__SDL_RendererFlip_void)(SDL_Renderer*, SDL_Texture*, SDL_Rect*, SDL_Rect*, double, SDL_Point*, SDL_RendererFlip);

// Depth 103
typedef void(*Fn__SDL_Renderer_MUL__SDL_Texture_MUL__SDL_Rect_MUL__SDL_Rect_MUL__void)(SDL_Renderer*, SDL_Texture*, SDL_Rect*, SDL_Rect*);

// Depth 103
typedef SDL_Texture*(*Fn__SDL_Renderer_MUL__String_String_MUL__SDL_Texture_MUL_)(SDL_Renderer*, String, String*);

// Depth 103
typedef SDL_Texture*(*Fn__SDL_Renderer_MUL__char_MUL__SDL_Texture_MUL_)(SDL_Renderer*, char*);

// Depth 103
typedef void(*Fn__SDL_Renderer_MUL__int_int_int_int_void)(SDL_Renderer*, int, int, int, int);

// Depth 103
typedef void(*Fn__SDL_Renderer_MUL__void)(SDL_Renderer*);

// Depth 103
typedef SDL_Texture*(*Fn__SDL_Texture_MUL__MUL__SDL_Texture_MUL_)(SDL_Texture**);

// Depth 103
typedef SDL_Rect(*Fn__SDL_Texture_MUL__SDL_Rect)(SDL_Texture*);

// Depth 103
typedef SDL_Texture*(*Fn__SDL_Texture_MUL__SDL_Texture_MUL_)(SDL_Texture*);

// Depth 103
typedef bool(*Fn__SDL_Texture_MUL__SDL_Texture_MUL__bool)(SDL_Texture*, SDL_Texture*);

// Depth 103
typedef bool(*Fn__SDL_Texture_MUL__bool)(SDL_Texture*);

// Depth 103
typedef void(*Fn__SDL_Texture_MUL__int_MUL__int_MUL__int_MUL__int_MUL__void)(SDL_Texture*, int*, int*, int*, int*);

// Depth 103
typedef SDL_Window*(*Fn__SDL_Window_MUL__MUL__SDL_Window_MUL_)(SDL_Window**);

// Depth 103
typedef SDL_Window*(*Fn__SDL_Window_MUL__SDL_Window_MUL_)(SDL_Window*);

// Depth 103
typedef void(*Fn__SDL_Window_MUL__char_MUL__void)(SDL_Window*, char*);

// Depth 103
typedef void(*Fn__SDL_Window_MUL__void)(SDL_Window*);

// Depth 103
typedef String(*Fn__String_Array__String_MUL__String)(String, Array__String*);

// Depth 103
typedef Array__char(*Fn__String_MUL__Array__char)(String*);

// Depth 103
typedef Array__String(*Fn__String_MUL__Array__char_MUL__Array__String)(String*, Array__char*);

// Depth 103
typedef FILE*(*Fn__String_MUL__String_MUL__FILE_MUL_)(String*, String*);

// Depth 103
typedef Array__SDL_Event(*Fn___Array__SDL_Event)();

// Depth 103
typedef Maybe__bool(*Fn___Maybe__bool)();

// Depth 103
typedef Maybe__double(*Fn___Maybe__double)();

// Depth 103
typedef Maybe__int(*Fn___Maybe__int)();

// Depth 103
typedef SDL_Event(*Fn___SDL_Event)();

// Depth 103
typedef Maybe__bool(*Fn__bool_Maybe__bool)(bool);

// Depth 103
typedef Maybe__double(*Fn__double_Maybe__double)(double);

// Depth 103
typedef Array__String(*Fn__int_Array__String)(int);

// Depth 103
typedef Array__char(*Fn__int_Array__char)(int);

// Depth 103
typedef Array__double(*Fn__int_Array__double)(int);

// Depth 103
typedef Array__int(*Fn__int_Array__int)(int);

// Depth 103
typedef Array__char(*Fn__int_Fn___char_MUL__Array__char)(int, Lambda*);

// Depth 103
typedef Array__double(*Fn__int_Fn___double_MUL__Array__double)(int, Lambda*);

// Depth 103
typedef Maybe__int(*Fn__int_Maybe__int)(int);

// Depth 103
typedef SDL_Texture*(*Fn__int_SDL_Texture_MUL_)(int);

// Depth 103
typedef Array__char(*Fn__int_char_MUL__Array__char)(int, char*);

// Depth 103
typedef Array__double(*Fn__int_double_MUL__Array__double)(int, double*);

// Depth 103
typedef SDL_Point(*Fn__int_int_SDL_Point)(int, int);

// Depth 103
typedef Array__int(*Fn__int_int_int_Array__int)(int, int, int);

// Depth 103
typedef SDL_Color(*Fn__int_int_int_SDL_Color)(int, int, int);

// Depth 103
typedef void(*Fn__int_int_int_SDL_Window_MUL__MUL__SDL_Renderer_MUL__MUL__void)(int, int, int, SDL_Window**, SDL_Renderer**);

// Depth 103
typedef SDL_Rect(*Fn__int_int_int_int_SDL_Rect)(int, int, int, int);

// Depth 104
typedef struct {
    union {
    struct {
        VectorN__double member0;
    } Just;
    struct {
    } Nothing;
    };
    char _tag;
} Maybe__VectorN__double;
#define Maybe__VectorN__double_Just_tag 0
#define Maybe__VectorN__double_Nothing_tag 1

// Depth 104
typedef Vector2__double(*Fn__Vector2__double_MUL__Vector2__double)(Vector2__double*);

// Depth 104
typedef Vector2__double(*Fn__Vector2__double_MUL__Vector2__double_MUL__Vector2__double)(Vector2__double*, Vector2__double*);

// Depth 104
typedef double(*Fn__Vector2__double_MUL__Vector2__double_MUL__double)(Vector2__double*, Vector2__double*);

// Depth 104
typedef double(*Fn__Vector2__double_MUL__double)(Vector2__double*);

// Depth 104
typedef double*(*Fn__Vector2__double_MUL__double_MUL_)(Vector2__double*);

// Depth 104
typedef Vector2__double(*Fn__Vector2__double_MUL__double_Vector2__double)(Vector2__double*, double);

// Depth 104
typedef Vector3__double(*Fn__Vector3__double_MUL__Vector3__double)(Vector3__double*);

// Depth 104
typedef double(*Fn__Vector3__double_MUL__Vector3__double_MUL__double)(Vector3__double*, Vector3__double*);

// Depth 104
typedef double(*Fn__Vector3__double_MUL__double)(Vector3__double*);

// Depth 104
typedef double*(*Fn__Vector3__double_MUL__double_MUL_)(Vector3__double*);

// Depth 104
typedef Vector3__double(*Fn__Vector3__double_MUL__double_Vector3__double)(Vector3__double*, double);

// Depth 104
typedef Vector2__double(*Fn__double_double_Vector2__double)(double, double);

// Depth 104
typedef Vector3__double(*Fn__double_double_double_Vector3__double)(double, double, double);

// Depth 104
typedef MouseState(*Fn__int_int_bool_bool_MouseState)(int, int, bool, bool);

// Depth 104
typedef struct {
    VectorN__double* a;
    VectorN__double* b;
} VectorN__Lambda_angle_MINUS_between_35_env;

// Depth 105
typedef SDL_Texture**(*Fn__Art_MUL__SDL_Texture_MUL__MUL_)(Art*);

// Depth 105
typedef VectorN__double(*Fn__Fn__double_double_double_Array__double_MUL__Array__double_MUL__VectorN__double)(Lambda, Array__double*, Array__double*);

// Depth 105
typedef SDL_Renderer**(*Fn__SDLApp_MUL__SDL_Renderer_MUL__MUL_)(SDLApp*);

// Depth 105
typedef void(*Fn__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void)(SDLApp*, SDL_Renderer*, int*);

// Depth 105
typedef SDL_Window**(*Fn__SDLApp_MUL__SDL_Window_MUL__MUL_)(SDLApp*);

// Depth 105
typedef int*(*Fn__SDLApp_MUL__int_MUL_)(SDLApp*);

// Depth 105
typedef void(*Fn__SDLApp_MUL__void)(SDLApp*);

// Depth 105
typedef Art(*Fn__SDL_Texture_MUL__Art)(SDL_Texture*);

// Depth 105
typedef SDLApp(*Fn__SDL_Window_MUL__SDL_Renderer_MUL__int_SDLApp)(SDL_Window*, SDL_Renderer*, int);

// Depth 105
typedef SDLApp(*Fn__String_MUL__int_int_SDLApp)(String*, int, int);

// Depth 105
typedef Array__double*(*Fn__VectorN__double_MUL__Array__double_MUL_)(VectorN__double*);

// Depth 105
typedef VectorN__double(*Fn__VectorN__double_MUL__VectorN__double)(VectorN__double*);

// Depth 105
typedef Maybe__double(*Fn__VectorN__double_MUL__VectorN__double_MUL__Maybe__double)(VectorN__double*, VectorN__double*);

// Depth 105
typedef double(*Fn__VectorN__double_MUL__double)(VectorN__double*);

// Depth 105
typedef VectorN__double(*Fn__VectorN__double_MUL__double_VectorN__double)(VectorN__double*, double);

// Depth 105
typedef int*(*Fn__VectorN__double_MUL__int_MUL_)(VectorN__double*);

// Depth 105
typedef double(*Fn__VectorN__double_double)(VectorN__double);

// Depth 105
typedef VectorN__double(*Fn__int_Array__double_VectorN__double)(int, Array__double);

// Depth 106
typedef Maybe__VectorN__double(*Fn__Fn__double_double_double_VectorN__double_MUL__VectorN__double_MUL__Maybe__VectorN__double)(Lambda, VectorN__double*, VectorN__double*);

// Depth 106
typedef Maybe__double(*Fn__Maybe__VectorN__double_Fn__VectorN__double_double_Maybe__double)(Maybe__VectorN__double, Lambda);

// Depth 106
typedef void(*Fn__SDLApp_MUL__Fn__SDLApp_MUL__void_Fn__int_int_Fn__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void_int_void)(SDLApp*, Lambda, Lambda, Lambda, int);

// Depth 106
typedef Maybe__VectorN__double(*Fn__VectorN__double_MUL__VectorN__double_MUL__Maybe__VectorN__double)(VectorN__double*, VectorN__double*);

// Depth 106
typedef Maybe__VectorN__double(*Fn__VectorN__double_Maybe__VectorN__double)(VectorN__double);

// Depth 106
typedef Maybe__VectorN__double(*Fn___Maybe__VectorN__double)();


//Declarations:

// Depth 500
bool _LT__EQ___char(char a, char b);

// Depth 500
bool _LT__EQ___int(int a, int b);

// Depth 500
bool _GT__EQ___int(int a, int b);

// Depth 500
VectorN__Lambda_angle_MINUS_between_35_env VectorN__Lambda_angle_MINUS_between_35_env_copy(VectorN__Lambda_angle_MINUS_between_35_env* pRef);

// Depth 500
void VectorN__Lambda_angle_MINUS_between_35_env_delete(VectorN__Lambda_angle_MINUS_between_35_env* p);

// Depth 500
Art art;

// Depth 500
void draw__SDLApp_MUL_(SDLApp* app, SDL_Renderer* rend, int* state);

// Depth 500
int enum_MINUS_to_MINUS_int__SDL_Keycode (SDL_Keycode e);

// Depth 500
SDL_Texture* load_MINUS_img__String_String_MUL_(SDL_Renderer* rend, String img_MINUS_dir, String* name);

// Depth 500
int main(int argc, char** argv);

// Depth 500
int max__int(int a, int b);

// Depth 500
int min__int(int a, int b);

// Depth 500
bool null_QMARK___SDL_Texture(SDL_Texture* p);

// Depth 500
bool pos_QMARK___int(int x);

// Depth 500
int tick(int state);

// Depth 1000

// Depth 500
Array Array_allocate__String (int n);

// Depth 500
Array Array_allocate__char (int n);

// Depth 500
Array Array_allocate__double (int n);

// Depth 500
Array Array_allocate__int (int n);

// Depth 500
void Array_aset_BANG___char (Array *aRef, int n, char newValue);

// Depth 500
void Array_aset_BANG___int (Array *aRef, int n, int newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___char (Array *aRef, int n, char newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___double (Array *aRef, int n, double newValue);

// Depth 500
Array__String Array_copy_MINUS_map__String_String(Lambda* f, Array__String* a);

// Depth 500
Array__double Array_copy_MINUS_map__double_double(Lambda* f, Array__double* a);

// Depth 500
Array Array_copy__double (Array* a);

// Depth 500
void Array_delete__SDL_Event (Array a);

// Depth 500
void Array_delete__String (Array a);

// Depth 500
void Array_delete__char (Array a);

// Depth 500
void Array_delete__double (Array a);

// Depth 500
void Array_delete__int (Array a);

// Depth 500
int Array_length__SDL_Event (Array *a);

// Depth 500
int Array_length__String (Array *a);

// Depth 500
int Array_length__char (Array *a);

// Depth 500
int Array_length__double (Array *a);

// Depth 500
int Array_length__int (Array *a);

// Depth 500
SDL_Event* Array_nth__SDL_Event (Array *aRef, int n);

// Depth 500
String* Array_nth__String (Array *aRef, int n);

// Depth 500
char* Array_nth__char (Array *aRef, int n);

// Depth 500
double* Array_nth__double (Array *aRef, int n);

// Depth 500
int* Array_nth__int (Array *aRef, int n);

// Depth 500
Array__String Array_prefix_MINUS_array__String(Array__String* xs, int end_MINUS_index);

// Depth 500
Array Array_push_MINUS_back__SDL_Event(Array a, SDL_Event value);

// Depth 500
Array Array_push_MINUS_back__String(Array a, String value);

// Depth 500
Array Array_push_MINUS_back__char(Array a, char value);

// Depth 500
Array__int Array_range__int(int start, int end, int step);

// Depth 500
double Array_reduce__double_double(Lambda* f, double x, Array__double* xs);

// Depth 500
Array__char Array_repeat__char(int n, Lambda* f);

// Depth 500
Array__double Array_repeat__double(int n, Lambda* f);

// Depth 500
Array__char Array_replicate__char(int n, char* e);

// Depth 500
Array__double Array_replicate__double(int n, double* e);

// Depth 500
Array__char Array_reverse__char(Array__char a);

// Depth 500
Array__String Array_subarray__String(Array__String* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__char Array_subarray__char(Array__char* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
String Array_unsafe_MINUS_last__String(Array__String* a);

// Depth 1000

// Depth 500
Art Art_copy(Art* pRef);

// Depth 500
void Art_delete(Art p);

// Depth 500
Art Art_init(SDL_Texture* player);

// Depth 500
SDL_Texture** Art_player(Art* p);

// Depth 500
String Art_prn(Art *p);

// Depth 500
Art Art_set_MINUS_player(Art p, SDL_Texture* newValue);

// Depth 500
void Art_set_MINUS_player_BANG_(Art* pRef, SDL_Texture* newValue);

// Depth 500
String Art_str(Art *p);

// Depth 500
Art Art_update_MINUS_player(Art p, Lambda *updater);

// Depth 1000

// Depth 500
int Bool_hash(bool* k);

// Depth 500
String Bool_prn(bool x);

// Depth 1000

// Depth 500
bool Char__DIV__EQ_(char a, char b);

// Depth 500
bool Char_alpha_QMARK_(char c);

// Depth 500
bool Char_alphanum_QMARK_(char c);

// Depth 500
int Char_hash(char* k);

// Depth 500
bool Char_lower_MINUS_case_QMARK_(char c);

// Depth 500
int Char_meaning(char* char_MINUS_ref);

// Depth 500
bool Char_num_QMARK_(char c);

// Depth 500
char Char_random();

// Depth 500
char Char_random_MINUS_between(char a, char b);

// Depth 500
bool Char_upper_MINUS_case_QMARK_(char c);

// Depth 1000

// Depth 500
bool CharRef__DIV__EQ_(char* a, char* b);

// Depth 500
bool CharRef__LT_(char* a, char* b);

// Depth 500
bool CharRef__EQ_(char* a, char* b);

// Depth 500
bool CharRef__GT_(char* a, char* b);

// Depth 1000

// Depth 500
bool Double__DIV__EQ_(double x, double y);

// Depth 500
double Double_add_MINUS_ref(double* x, double* y);

// Depth 500
bool Double_approx(double x, double y);

// Depth 500
double Double_clamp__double(double min, double max, double val);

// Depth 500
double Double_e;

// Depth 500
int Double_hash(double* k);

// Depth 500
double Double_pi;

// Depth 500
String Double_prn(double x);

// Depth 500
double Double_random();

// Depth 500
double Double_random_MINUS_between(double lower, double upper);

// Depth 500
double Double_zero();

// Depth 1000

// Depth 500
bool DoubleRef__LT_(double* a, double* b);

// Depth 500
bool DoubleRef__EQ_(double* a, double* b);

// Depth 500
bool DoubleRef__GT_(double* a, double* b);

// Depth 1000

// Depth 500
String Filepath__Lambda_dir_MINUS_from_MINUS_path_44(String* s);

// Depth 500
String Filepath_dir_MINUS_from_MINUS_path(String* path);

// Depth 500
String Filepath_file_MINUS_from_MINUS_path(String* path);

// Depth 1000

// Depth 500
bool Float__DIV__EQ_(float x, float y);

// Depth 500
float Float_add_MINUS_ref(float* x, float* y);

// Depth 500
bool Float_approx(float x, float y);

// Depth 500
int Float_hash(float* k);

// Depth 500
float Float_pi;

// Depth 500
String Float_prn(float x);

// Depth 500
float Float_random();

// Depth 500
float Float_random_MINUS_between(float lower, float upper);

// Depth 500
float Float_zero();

// Depth 1000

// Depth 500
bool FloatRef__LT_(float* a, float* b);

// Depth 500
bool FloatRef__EQ_(float* a, float* b);

// Depth 500
bool FloatRef__GT_(float* a, float* b);

// Depth 1000

// Depth 500
void Function_delete__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void (Lambda f);

// Depth 500
void Function_delete__SDLApp_MUL__void (Lambda f);

// Depth 500
void Function_delete__String_MUL__String (Lambda f);

// Depth 500
void Function_delete__VectorN__double_double (Lambda f);

// Depth 500
void Function_delete__double_MUL__double (Lambda f);

// Depth 500
void Function_delete__double_bool (Lambda f);

// Depth 500
void Function_delete__double_double (Lambda f);

// Depth 500
void Function_delete__double_double_MUL__double (Lambda f);

// Depth 500
void Function_delete__double_double_double (Lambda f);

// Depth 500
void Function_delete__int_int (Lambda f);

// Depth 500
void Function_delete__int_int_bool (Lambda f);

// Depth 1000

// Depth 500
int Heap_lchild(int i);

// Depth 500
int Heap_parent(int i);

// Depth 500
int Heap_rchild(int i);

// Depth 1000

// Depth 500
String IO_read_MINUS__GT_EOF(String* filename);

// Depth 1000

// Depth 500
int Int_add_MINUS_ref(int* x, int* y);

// Depth 500
bool Int_even_QMARK_(int a);

// Depth 500
int Int_hash(int* k);

// Depth 500
bool Int_odd_QMARK_(int a);

// Depth 500
int Int_positive_MINUS_mod(int k, int n);

// Depth 500
int Int_pow(int x, int y);

// Depth 500
String Int_prn(int x);

// Depth 500
int Int_random();

// Depth 500
int Int_random_MINUS_between(int lower, int upper);

// Depth 500
int Int_to_MINUS_int__int(int a);

// Depth 500
int Int_zero();

// Depth 1000

// Depth 500
bool IntRef__DIV__EQ_(int* a, int* b);

// Depth 500
bool IntRef__LT_(int* a, int* b);

// Depth 500
bool IntRef__EQ_(int* a, int* b);

// Depth 500
bool IntRef__GT_(int* a, int* b);

// Depth 500
String IntRef_prn(int* x);

// Depth 500
String IntRef_str(int* x);

// Depth 1000

// Depth 500
bool Long__DIV__EQ_(long x, long y);

// Depth 500
bool Long_even_QMARK_(long a);

// Depth 500
int Long_hash(long* k);

// Depth 500
bool Long_odd_QMARK_(long a);

// Depth 500
String Long_prn(long x);

// Depth 500
long Long_random();

// Depth 500
long Long_random_MINUS_between(long lower, long upper);

// Depth 1000

// Depth 500
bool LongRef__LT_(long* a, long* b);

// Depth 500
bool LongRef__EQ_(long* a, long* b);

// Depth 500
bool LongRef__GT_(long* a, long* b);

// Depth 1000

// Depth 500
int Map_dflt_MINUS_len;

// Depth 1000

// Depth 500
Maybe__VectorN__double Maybe_Just__VectorN__double(VectorN__double member0);

// Depth 500
Maybe__bool Maybe_Just__bool(bool member0);

// Depth 500
Maybe__double Maybe_Just__double(double member0);

// Depth 500
Maybe__int Maybe_Just__int(int member0);

// Depth 500
Maybe__VectorN__double Maybe_Nothing__VectorN__double();

// Depth 500
Maybe__bool Maybe_Nothing__bool();

// Depth 500
Maybe__double Maybe_Nothing__double();

// Depth 500
Maybe__int Maybe_Nothing__int();

// Depth 500
Maybe__double Maybe_apply__VectorN__double_double(Maybe__VectorN__double a, Lambda f);

// Depth 500
Maybe__bool Maybe_apply__double_bool(Maybe__double a, Lambda f);

// Depth 500
Maybe__double Maybe_apply__double_double(Maybe__double a, Lambda f);

// Depth 500
void Maybe_delete__VectorN__double(Maybe__VectorN__double p);

// Depth 500
void Maybe_delete__bool(Maybe__bool p);

// Depth 500
void Maybe_delete__double(Maybe__double p);

// Depth 500
void Maybe_delete__int(Maybe__int p);

// Depth 1000

// Depth 500
Pattern Pattern_from_MINUS_chars(Array__char* chars);

// Depth 500
bool Pattern_matches_QMARK_(Pattern* pat, String* s);

// Depth 1000

// Depth 500
SDL_Renderer* Pointer_copy__SDL_Renderer (SDL_Renderer** ptrRef);

// Depth 500
SDL_Texture* Pointer_copy__SDL_Texture (SDL_Texture** ptrRef);

// Depth 500
SDL_Window* Pointer_copy__SDL_Window (SDL_Window** ptrRef);

// Depth 500
bool Pointer_eq__SDL_Texture (SDL_Texture *p1, SDL_Texture *p2);

// Depth 1000

// Depth 500
double Random_a;

// Depth 500
double Random_c;

// Depth 500
double Random_m;

// Depth 500
double Random_random();

// Depth 500
double Random_s;

// Depth 500
void Random_seed();

// Depth 500
void Random_seed_MINUS_from(double new_MINUS_seed);

// Depth 1000

// Depth 500
bool RefBool__EQ_(bool* a, bool* b);

// Depth 1000

// Depth 500
void SDL_bg(SDL_Renderer* rend, SDL_Color* color);

// Depth 500
SDL_Rect SDL_dimensions(SDL_Texture* texture);

// Depth 500
void SDL_draw_MINUS_texture(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point);

// Depth 500
void SDL_draw_MINUS_texture_MINUS_centered(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point);

// Depth 1000

// Depth 500
Array__SDL_Event SDL_Event_all();

// Depth 1000

// Depth 500
bool SDL_Keycode__DIV__EQ_(SDL_Keycode x, SDL_Keycode y);

// Depth 500
bool SDL_Keycode__EQ_(SDL_Keycode a, SDL_Keycode b);

// Depth 500
String SDL_Keycode_prn(SDL_Keycode x);

// Depth 1000

// Depth 500
MouseState SDL_MouseState_copy(MouseState* pRef);

// Depth 500
void SDL_MouseState_delete(MouseState p);

// Depth 500
MouseState SDL_MouseState_get();

// Depth 500
MouseState SDL_MouseState_init(int x, int y, bool left, bool right);

// Depth 500
bool* SDL_MouseState_left(MouseState* p);

// Depth 500
String SDL_MouseState_prn(MouseState *p);

// Depth 500
bool* SDL_MouseState_right(MouseState* p);

// Depth 500
MouseState SDL_MouseState_set_MINUS_left(MouseState p, bool newValue);

// Depth 500
void SDL_MouseState_set_MINUS_left_BANG_(MouseState* pRef, bool newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_right(MouseState p, bool newValue);

// Depth 500
void SDL_MouseState_set_MINUS_right_BANG_(MouseState* pRef, bool newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_x(MouseState p, int newValue);

// Depth 500
void SDL_MouseState_set_MINUS_x_BANG_(MouseState* pRef, int newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_y(MouseState p, int newValue);

// Depth 500
void SDL_MouseState_set_MINUS_y_BANG_(MouseState* pRef, int newValue);

// Depth 500
String SDL_MouseState_str(MouseState *p);

// Depth 500
MouseState SDL_MouseState_update_MINUS_left(MouseState p, Lambda *updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_right(MouseState p, Lambda *updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_x(MouseState p, Lambda *updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_y(MouseState p, Lambda *updater);

// Depth 500
int* SDL_MouseState_x(MouseState* p);

// Depth 500
int* SDL_MouseState_y(MouseState* p);

// Depth 1000

// Depth 500
SDLApp SDLApp_copy(SDLApp* pRef);

// Depth 500
SDLApp SDLApp_create(String* title, int width, int height);

// Depth 500
void SDLApp_delete(SDLApp p);

// Depth 500
int* SDLApp_fps(SDLApp* p);

// Depth 500
SDLApp SDLApp_init(SDL_Window* window, SDL_Renderer* renderer, int fps);

// Depth 500
String SDLApp_prn(SDLApp *p);

// Depth 500
void SDLApp_quit_MINUS_on_MINUS_esc(SDLApp* app);

// Depth 500
SDL_Renderer** SDLApp_renderer(SDLApp* p);

// Depth 500
void SDLApp_run_MINUS_with_MINUS_callbacks__int(SDLApp* app, Lambda event_MINUS_fn, Lambda update_MINUS_fn, Lambda draw_MINUS_fn, int initial_MINUS_state);

// Depth 500
SDLApp SDLApp_set_MINUS_fps(SDLApp p, int newValue);

// Depth 500
void SDLApp_set_MINUS_fps_BANG_(SDLApp* pRef, int newValue);

// Depth 500
SDLApp SDLApp_set_MINUS_renderer(SDLApp p, SDL_Renderer* newValue);

// Depth 500
void SDLApp_set_MINUS_renderer_BANG_(SDLApp* pRef, SDL_Renderer* newValue);

// Depth 500
SDLApp SDLApp_set_MINUS_window(SDLApp p, SDL_Window* newValue);

// Depth 500
void SDLApp_set_MINUS_window_BANG_(SDLApp* pRef, SDL_Window* newValue);

// Depth 500
void SDLApp_stop__void(SDLApp* app);

// Depth 500
String SDLApp_str(SDLApp *p);

// Depth 500
SDLApp SDLApp_update_MINUS_fps(SDLApp p, Lambda *updater);

// Depth 500
SDLApp SDLApp_update_MINUS_renderer(SDLApp p, Lambda *updater);

// Depth 500
SDLApp SDLApp_update_MINUS_window(SDLApp p, Lambda *updater);

// Depth 500
SDL_Window** SDLApp_window(SDLApp* p);

// Depth 1000

// Depth 500
SDL_Point SDL_Point_init(int x, int y);

// Depth 500
String SDL_Point_prn(SDL_Point *p);

// Depth 500
SDL_Point SDL_Point_set_MINUS_x(SDL_Point p, int newValue);

// Depth 500
void SDL_Point_set_MINUS_x_BANG_(SDL_Point* pRef, int newValue);

// Depth 500
SDL_Point SDL_Point_set_MINUS_y(SDL_Point p, int newValue);

// Depth 500
void SDL_Point_set_MINUS_y_BANG_(SDL_Point* pRef, int newValue);

// Depth 500
String SDL_Point_str(SDL_Point *p);

// Depth 500
SDL_Point SDL_Point_update_MINUS_x(SDL_Point p, Lambda *updater);

// Depth 500
SDL_Point SDL_Point_update_MINUS_y(SDL_Point p, Lambda *updater);

// Depth 500
int* SDL_Point_x(SDL_Point* p);

// Depth 500
int* SDL_Point_y(SDL_Point* p);

// Depth 1000

// Depth 500
int* SDL_Rect_h(SDL_Rect* p);

// Depth 500
SDL_Rect SDL_Rect_init(int x, int y, int w, int h);

// Depth 500
String SDL_Rect_prn(SDL_Rect *p);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_h(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_h_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_w(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_w_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_x(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_x_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_y(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_y_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
String SDL_Rect_str(SDL_Rect *p);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_h(SDL_Rect p, Lambda *updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_w(SDL_Rect p, Lambda *updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_x(SDL_Rect p, Lambda *updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_y(SDL_Rect p, Lambda *updater);

// Depth 500
int* SDL_Rect_w(SDL_Rect* p);

// Depth 500
int* SDL_Rect_x(SDL_Rect* p);

// Depth 500
int* SDL_Rect_y(SDL_Rect* p);

// Depth 1000

// Depth 500
int Set_dflt_MINUS_len;

// Depth 1000

// Depth 500
bool String__DIV__EQ_(String* a, String* b);

// Depth 500
bool String_alpha_QMARK_(String* s);

// Depth 500
bool String_alphanum_QMARK_(String* s);

// Depth 500
String String_chomp(String* s);

// Depth 500
String String_collapse_MINUS_whitespace(String* s);

// Depth 500
String String_concat(Array__String* strings);

// Depth 500
bool String_contains_QMARK_(String* s, char c);

// Depth 500
int String_count_MINUS_char(String* s, char c);

// Depth 500
bool String_empty_QMARK_(String* s);

// Depth 500
bool String_ends_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
int String_hash(String* k);

// Depth 500
char String_head(String* s);

// Depth 500
bool String_hex_QMARK_(String* s);

// Depth 500
bool String_in_QMARK_(String* s, String* sub);

// Depth 500
String String_join(String sep, Array__String* strings);

// Depth 500
String String_join_MINUS_with_MINUS_char(char sep, Array__String* strings);

// Depth 500
Array__String String_lines(String* s);

// Depth 500
bool String_lower_QMARK_(String* s);

// Depth 500
bool String_num_QMARK_(String* s);

// Depth 500
String String_pad_MINUS_left(int len, char pad, String* s);

// Depth 500
String String_pad_MINUS_right(int len, char pad, String* s);

// Depth 500
String String_prefix_MINUS_string(String* s, int a);

// Depth 500
String String_random_MINUS_sized(int n);

// Depth 500
String String_repeat(int n, String* inpt);

// Depth 500
String String_reverse(String* s);

// Depth 500
Array__String String_split_MINUS_by(String* s, Array__char* separators);

// Depth 500
bool String_starts_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
String String_substring(String* s, int a, int b);

// Depth 500
String String_suffix_MINUS_string(String* s, int b);

// Depth 500
int String_sum_MINUS_length(Array__String* strings);

// Depth 500
String String_trim(String* s);

// Depth 500
String String_trim_MINUS_left(String* s);

// Depth 500
String String_trim_MINUS_right(String* s);

// Depth 500
bool String_upper_QMARK_(String* s);

// Depth 500
Array__String String_words(String* s);

// Depth 500
String String_zero();

// Depth 1000

// Depth 500
bool StringCopy__DIV__EQ_(String a, String b);

// Depth 500
bool StringCopy__LT_(String a, String b);

// Depth 500
bool StringCopy__EQ_(String a, String b);

// Depth 500
bool StringCopy__GT_(String a, String b);

// Depth 500
String StringCopy_prn(String s);

// Depth 500
String StringCopy_str(String s);

// Depth 1000

// Depth 500
SDL_Texture* System_exit__SDL_Texture_MUL_ (int code);

// Depth 500
void System_exit__void (int code);

// Depth 1000

// Depth 500
bool Vector2__EQ_(Vector2__double* a, Vector2__double* b);

// Depth 500
double Vector2_angle_MINUS_between(Vector2__double* a, Vector2__double* b);

// Depth 500
bool Vector2_anti_MINUS_parallel_QMARK_(Vector2__double* a, Vector2__double* b);

// Depth 500
bool Vector2_approx(Vector2__double* a, Vector2__double* b);

// Depth 500
Vector2__double Vector2_copy__double(Vector2__double* pRef);

// Depth 500
void Vector2_delete__double(Vector2__double p);

// Depth 500
double Vector2_dist(Vector2__double* a, Vector2__double* b);

// Depth 500
Vector2__double Vector2_div__double(Vector2__double* a, double n);

// Depth 500
double Vector2_dot__double(Vector2__double* a, Vector2__double* b);

// Depth 500
double Vector2_heading(Vector2__double* a);

// Depth 500
Vector2__double Vector2_init__double(double x, double y);

// Depth 500
double Vector2_mag(Vector2__double* o);

// Depth 500
double Vector2_mag_MINUS_sq__double(Vector2__double* o);

// Depth 500
Vector2__double Vector2_normalize(Vector2__double* o);

// Depth 500
bool Vector2_parallel_QMARK_(Vector2__double* a, Vector2__double* b);

// Depth 500
bool Vector2_perpendicular_QMARK_(Vector2__double* a, Vector2__double* b);

// Depth 500
Vector2__double Vector2_random();

// Depth 500
Vector2__double Vector2_rotate(Vector2__double* a, double n);

// Depth 500
Vector2__double Vector2_sub__double(Vector2__double* a, Vector2__double* b);

// Depth 500
double* Vector2_x__double(Vector2__double* p);

// Depth 500
double* Vector2_y__double(Vector2__double* p);

// Depth 500
Vector2__double Vector2_zero();

// Depth 1000

// Depth 500
bool Vector3__EQ_(Vector3__double* a, Vector3__double* b);

// Depth 500
double Vector3_angle_MINUS_between(Vector3__double* a, Vector3__double* b);

// Depth 500
bool Vector3_anti_MINUS_parallel_QMARK_(Vector3__double* a, Vector3__double* b);

// Depth 500
Vector3__double Vector3_copy__double(Vector3__double* pRef);

// Depth 500
void Vector3_delete__double(Vector3__double p);

// Depth 500
Vector3__double Vector3_div__double(Vector3__double* a, double n);

// Depth 500
double Vector3_dot__double(Vector3__double* a, Vector3__double* b);

// Depth 500
Vector3__double Vector3_init__double(double x, double y, double z);

// Depth 500
double Vector3_mag(Vector3__double* o);

// Depth 500
double Vector3_mag_MINUS_sq__double(Vector3__double* o);

// Depth 500
Vector3__double Vector3_normalize(Vector3__double* o);

// Depth 500
bool Vector3_parallel_QMARK_(Vector3__double* a, Vector3__double* b);

// Depth 500
bool Vector3_perpendicular_QMARK_(Vector3__double* a, Vector3__double* b);

// Depth 500
Vector3__double Vector3_random();

// Depth 500
double* Vector3_x__double(Vector3__double* p);

// Depth 500
double* Vector3_y__double(Vector3__double* p);

// Depth 500
double* Vector3_z__double(Vector3__double* p);

// Depth 500
Vector3__double Vector3_zero();

// Depth 1000

// Depth 500
double VectorN__Lambda__Lambda_dot_35_26(double x, double* y);

// Depth 500
double VectorN__Lambda_angle_MINUS_between_35(VectorN__Lambda_angle_MINUS_between_35_env* _env, double x);

// Depth 500
bool VectorN__Lambda_anti_MINUS_parallel_QMARK__17(double x);

// Depth 500
double VectorN__Lambda_dist_18(VectorN__double s);

// Depth 500
double VectorN__Lambda_dot_26(double x, double* y);

// Depth 500
double VectorN__Lambda_dot_35(VectorN__double x);

// Depth 500
double VectorN__Lambda_mag_MINUS_sq_16(double x, double* y);

// Depth 500
double VectorN__Lambda_mag_MINUS_sq_33(double* x);

// Depth 500
bool VectorN__Lambda_parallel_QMARK__17(double x);

// Depth 500
bool VectorN__Lambda_perpendicular_QMARK__20(double x);

// Depth 500
Maybe__double VectorN_angle_MINUS_between(VectorN__double* a, VectorN__double* b);

// Depth 500
Maybe__bool VectorN_anti_MINUS_parallel_QMARK_(VectorN__double* a, VectorN__double* b);

// Depth 500
VectorN__double VectorN_copy__double(VectorN__double* pRef);

// Depth 500
void VectorN_delete__double(VectorN__double p);

// Depth 500
Maybe__double VectorN_dist(VectorN__double* a, VectorN__double* b);

// Depth 500
VectorN__double VectorN_div__double(VectorN__double* a, double n);

// Depth 500
Maybe__double VectorN_dot(VectorN__double* x, VectorN__double* y);

// Depth 500
VectorN__double VectorN_init__double(int n, Array__double v);

// Depth 500
double VectorN_mag(VectorN__double* o);

// Depth 500
double VectorN_mag_MINUS_sq(VectorN__double* o);

// Depth 500
int* VectorN_n__double(VectorN__double* p);

// Depth 500
VectorN__double VectorN_normalize(VectorN__double* o);

// Depth 500
Maybe__bool VectorN_parallel_QMARK_(VectorN__double* a, VectorN__double* b);

// Depth 500
Maybe__bool VectorN_perpendicular_QMARK_(VectorN__double* a, VectorN__double* b);

// Depth 500
VectorN__double VectorN_random_MINUS_sized(int n);

// Depth 500
Maybe__VectorN__double VectorN_sub__double(VectorN__double* a, VectorN__double* b);

// Depth 500
double VectorN_unit_MINUS_random();

// Depth 500
Array__double* VectorN_v__double(VectorN__double* p);

// Depth 500
VectorN__double VectorN_zero_MINUS_sized(int n);

// Depth 500
VectorN__double VectorN_zip_MINUS___double_double_double(Lambda f, Array__double* a, Array__double* b);

// Depth 500
Maybe__VectorN__double VectorN_zip__double_double_double(Lambda f, VectorN__double* a, VectorN__double* b);


//Init globals:
void carp_init_globals(int argc, char** argv) {
  System_args.len = argc;
  System_args.data = argv;

    // Depth 0
    {
        Double_e = 2.718281828459045;
    }

    // Depth 0
    {
        Double_pi = 3.141592653589793;
    }

    // Depth 0
    {
        Float_pi = 3.1415926536f;
    }

    // Depth 0
    {
        Map_dflt_MINUS_len = 256;
    }

    // Depth 0
    {
        Random_a = 69069.0;
    }

    // Depth 0
    {
        Random_c = 1.0;
    }

    // Depth 0
    {
        Random_m = 4.294967296e9;
    }

    // Depth 0
    {
        Random_s = 1.938011e7;
    }

    // Depth 0
    {
        Set_dflt_MINUS_len = 256;
    }

    // Depth 1
    {
        Art _4 = Art_init(NULL);
        art = _4;
    }
}

//Definitions:
bool _LT__EQ___char(char a, char b) {
    bool _19;
    bool _9 = Char__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Char__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _LT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _GT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

Array Array_allocate__String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(String));
    return a;
}

Array Array_allocate__char (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(char));
    return a;
}

Array Array_allocate__double (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(double));
    return a;
}

Array Array_allocate__int (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(int));
    return a;
}

void Array_aset_BANG___char (Array *aRef, int n, char newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    /* Ignore non-managed type inside Array: 'Char' */

    ((char*)a.data)[n] = newValue;
}

void Array_aset_BANG___int (Array *aRef, int n, int newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    /* Ignore non-managed type inside Array: 'Int' */

    ((int*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___char (Array *aRef, int n, char newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((char*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___double (Array *aRef, int n, double newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((double*)a.data)[n] = newValue;
}

Array__String Array_copy_MINUS_map__String_String(Lambda* f, Array__String* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__String(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__String(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__String* _29 = &na; // ref
                String* _37 = Array_nth__String(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, String*))(*f).callback)((*f).env, _37) : ((String(*)(String*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__String(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__double Array_copy_MINUS_map__double_double(Lambda* f, Array__double* a) {
    Array__double _52;
    /* let */ {
        int _10 = Array_length__double(a);
        Array__double _11 = Array_allocate__double(_10);
        Array__double na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__double(a);
            bool _24 = Int__LT_(i, _23);
            bool _48 = _24;
            while (_48) {
                Array__double* _29 = &na; // ref
                double* _37 = Array_nth__double(a, i);
                double _38 = (*f).env ? ((double(*)(LambdaEnv, double*))(*f).callback)((*f).env, _37) : ((double(*)(double*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___double(_29, i, _38);
                int _45 = Int__PLUS_(i, 1);
                i = _45;  // Int = Int
                int _23 = Array_length__double(a);
                bool _24 = Int__LT_(i, _23);
                _48 = _24;
            }
        }
        Array__double _51 = na;
        _52 = _51;
    }
    return _52;
}

Array Array_copy__double (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(double) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((double*)(copy.data))[i] = Double_copy(&(((double*)a->data)[i]));
    }
    return copy;
}

void Array_delete__SDL_Event (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'SDL_Event' */
    }
    CARP_FREE(a.data);
}

void Array_delete__String (Array a){
    for(int i = 0; i < a.len; i++) {
        String_delete(((String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__char (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Char' */
    }
    CARP_FREE(a.data);
}

void Array_delete__double (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Double' */
    }
    CARP_FREE(a.data);
}

void Array_delete__int (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Int' */
    }
    CARP_FREE(a.data);
}

int Array_length__SDL_Event (Array *a) { return (*a).len; }
int Array_length__String (Array *a) { return (*a).len; }
int Array_length__char (Array *a) { return (*a).len; }
int Array_length__double (Array *a) { return (*a).len; }
int Array_length__int (Array *a) { return (*a).len; }
SDL_Event* Array_nth__SDL_Event (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((SDL_Event*)a.data)[n]);
}

String* Array_nth__String (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((String*)a.data)[n]);
}

char* Array_nth__char (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((char*)a.data)[n]);
}

double* Array_nth__double (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((double*)a.data)[n]);
}

int* Array_nth__int (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((int*)a.data)[n]);
}

Array__String Array_prefix_MINUS_array__String(Array__String* xs, int end_MINUS_index) {
    Array__String _9 = Array_subarray__String(xs, 0, end_MINUS_index);
    return _9;
}

Array Array_push_MINUS_back__SDL_Event(Array a, SDL_Event value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(SDL_Event) * a.capacity);
    }
    ((SDL_Event*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__String(Array a, String value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(String) * a.capacity);
    }
    ((String*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__char(Array a, char value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(char) * a.capacity);
    }
    ((char*)a.data)[a.len - 1] = value;
    return a;
}

Array__int Array_range__int(int start, int end, int step) {
    Array__int _72;
    /* let */ {
        int _16 = Int__MINUS_(end, start);
        int _18 = Int__DIV_(_16, step);
        int _19 = Int_to_MINUS_int__int(_18);
        int _20 = Int_abs(_19);
        int _21 = Int_inc(_20);
        Array__int _22 = Array_allocate__int(_21);
        Array__int x = _22;
        int e = start;
        int i = 0;
        Lambda _39;
        bool _32 = Int__LT_(start, end);
        if (_32) {
            Lambda _34 = { .callback = _LT__EQ___int, .env = NULL, .delete = NULL, .copy = NULL }; //Sym <=__int (LookupGlobal CarpLand AFunction)
            Lambda _35 = _34;
            _39 = _35;
        } else {
            Lambda _37 = { .callback = _GT__EQ___int, .env = NULL, .delete = NULL, .copy = NULL }; //Sym >=__int (LookupGlobal CarpLand AFunction)
            Lambda _38 = _37;
            _39 = _38;
        }
        Lambda op = _39;
        bool _46 = op.env ? ((bool(*)(LambdaEnv, int, int))op.callback)(op.env, e, end) : ((bool(*)(int, int))op.callback)(e, end);
        bool _69 = _46;
        while (_69) {
            Array__int* _51 = &x; // ref
            Array_aset_BANG___int(_51, i, e);
            int _59 = Int_inc(i);
            i = _59;  // Int = Int
            int _66 = Int__PLUS_(e, step);
            e = _66;  // Int = Int
            bool _46 = op.env ? ((bool(*)(LambdaEnv, int, int))op.callback)(op.env, e, end) : ((bool(*)(int, int))op.callback)(e, end);
            _69 = _46;
        }
        Array__int _71 = x;
        _72 = _71;
        Function_delete__int_int_bool(op);
    }
    return _72;
}

double Array_reduce__double_double(Lambda* f, double x, Array__double* xs) {
    double _47;
    /* let */ {
        double total = x;
        /* let */ {
            int i = 0;
            int _20 = Array_length__double(xs);
            bool _21 = Int__LT_(i, _20);
            bool _43 = _21;
            while (_43) {
                double* _32 = Array_nth__double(xs, i);
                double _33 = (*f).env ? ((double(*)(LambdaEnv, double, double*))(*f).callback)((*f).env, total, _32) : ((double(*)(double, double*))(*f).callback)(total, _32);
                total = _33;  // Double = Double
                int _40 = Int__PLUS_(i, 1);
                i = _40;  // Int = Int
                int _20 = Array_length__double(xs);
                bool _21 = Int__LT_(i, _20);
                _43 = _21;
            }
        }
        double _46 = total;
        _47 = _46;
    }
    return _47;
}

Array__char Array_repeat__char(int n, Lambda* f) {
    Array__char _44;
    /* let */ {
        Array__char _9 = Array_allocate__char(n);
        Array__char a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _40 = _20;
            while (_40) {
                Array__char* _25 = &a; // ref
                char _30 = (*f).env ? ((char(*)(LambdaEnv))(*f).callback)((*f).env) : ((char(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___char(_25, i, _30);
                int _37 = Int__PLUS_(i, 1);
                i = _37;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _40 = _20;
            }
        }
        Array__char _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__double Array_repeat__double(int n, Lambda* f) {
    Array__double _44;
    /* let */ {
        Array__double _9 = Array_allocate__double(n);
        Array__double a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _40 = _20;
            while (_40) {
                Array__double* _25 = &a; // ref
                double _30 = (*f).env ? ((double(*)(LambdaEnv))(*f).callback)((*f).env) : ((double(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___double(_25, i, _30);
                int _37 = Int__PLUS_(i, 1);
                i = _37;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _40 = _20;
            }
        }
        Array__double _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__char Array_replicate__char(int n, char* e) {
    Array__char _43;
    /* let */ {
        Array__char _9 = Array_allocate__char(n);
        Array__char a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                Array__char* _25 = &a; // ref
                char _29 = Char_copy(e);
                Array_aset_MINUS_uninitialized_BANG___char(_25, i, _29);
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        Array__char _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__double Array_replicate__double(int n, double* e) {
    Array__double _43;
    /* let */ {
        Array__double _9 = Array_allocate__double(n);
        Array__double a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                Array__double* _25 = &a; // ref
                double _29 = Double_copy(e);
                Array_aset_MINUS_uninitialized_BANG___double(_25, i, _29);
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        Array__double _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__char Array_reverse__char(Array__char a) {
    Array__char _72;
    /* let */ {
        int i = 0;
        Array__char* _12 = &a; // ref
        int _13 = Array_length__char(_12);
        int _14 = Int_dec(_13);
        int j = _14;
        bool _21 = Int__LT_(i, j);
        bool _69 = _21;
        while (_69) {
            /* let */ {
                Array__char* _28 = &a; // ref
                char* _30 = Array_nth__char(_28, i);
                char _31 = Char_copy(_30);
                char tmp = _31;
                Array__char* _37 = &a; // ref
                Array__char* _43 = &a; // ref
                char* _45 = Array_nth__char(_43, j);
                char _46 = Char_copy(_45);
                Array_aset_BANG___char(_37, i, _46);
                int _52 = Int_inc(i);
                i = _52;  // Int = Int
                Array__char* _57 = &a; // ref
                Array_aset_BANG___char(_57, j, tmp);
                int _65 = Int_dec(j);
                j = _65;  // Int = Int
            }
            bool _21 = Int__LT_(i, j);
            _69 = _21;
        }
        Array__char _71 = a;
        _72 = _71;
    }
    return _72;
}

Array__String Array_subarray__String(Array__String* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__String _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(String) * 0) };
        Array__String result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _19 = Int__LT_(i, end_MINUS_index);
            bool _41 = _19;
            while (_41) {
                String* _29 = Array_nth__String(xs, i);
                String _30 = String_copy(_29);
                Array__String _31 = Array_push_MINUS_back__String(result, _30);
                result = _31;  // (Array String) = (Array String)
                int _38 = Int__PLUS_(i, 1);
                i = _38;  // Int = Int
                bool _19 = Int__LT_(i, end_MINUS_index);
                _41 = _19;
            }
        }
        Array__String _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__char Array_subarray__char(Array__char* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__char _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(char) * 0) };
        Array__char result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _19 = Int__LT_(i, end_MINUS_index);
            bool _41 = _19;
            while (_41) {
                char* _29 = Array_nth__char(xs, i);
                char _30 = Char_copy(_29);
                Array__char _31 = Array_push_MINUS_back__char(result, _30);
                result = _31;  // (Array Char) = (Array Char)
                int _38 = Int__PLUS_(i, 1);
                i = _38;  // Int = Int
                bool _19 = Int__LT_(i, end_MINUS_index);
                _41 = _19;
            }
        }
        Array__char _44 = result;
        _45 = _44;
    }
    return _45;
}

String Array_unsafe_MINUS_last__String(Array__String* a) {
    int _10 = Array_length__String(a);
    int _11 = Int_dec(_10);
    String* _12 = Array_nth__String(a, _11);
    String _13 = String_copy(_12);
    return _13;
}

Art Art_copy(Art* pRef) {
    Art copy = *pRef;
    /* Ignore non-managed member 'player' : (Ptr SDL_Texture) */
    return copy;
}

void Art_delete(Art p) {
    /* Ignore non-managed member 'player' : (Ptr SDL_Texture) */
}

Art Art_init(SDL_Texture* player) {
    Art instance;
    instance.player = player;
    return instance;
}

SDL_Texture** Art_player(Art* p) { return (&(p->player)); }

String Art_prn(Art *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Art");
  size +=  snprintf(NULL, 0, "%p ", p->player);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Art");
  bufferPtr += strlen("Art") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->player);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->player);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Art Art_set_MINUS_player(Art p, SDL_Texture* newValue) {
    /* Ignore non-managed member 'player' : (Ptr SDL_Texture) */
    p.player = newValue;
    return p;
}


void Art_set_MINUS_player_BANG_(Art* pRef, SDL_Texture* newValue) {
    pRef->player = newValue;
}


String Art_str(Art *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Art");
  size +=  snprintf(NULL, 0, "%p ", p->player);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Art");
  bufferPtr += strlen("Art") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->player);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->player);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Art Art_update_MINUS_player(Art p, Lambda *updater) {
    p.player = (*updater).env ? ((Fn__LambdaEnv_SDL_Texture_MUL__SDL_Texture_MUL_)(*updater).callback)((*updater).env, p.player) : ((Fn__SDL_Texture_MUL__SDL_Texture_MUL_)(*updater).callback)(p.player);
    return p;
}


int Bool_hash(bool* k) {
    int _17;
    bool _9 = Bool_copy(k);
    bool _10 = _9; // From the 'the' function.
    if (_10) {
        int _13 = 1;
        _17 = _13;
    } else {
        int _16 = 0;
        _17 = _16;
    }
    return _17;
}

String Bool_prn(bool x) {
    String _6 = Bool_str(x);
    return _6;
}

bool Char__DIV__EQ_(char a, char b) {
    char _10 = a; // From the 'the' function.
    bool _12 = Char__EQ_(_10, b);
    bool _13 = not(_12);
    return _13;
}

bool Char_alpha_QMARK_(char c) {
    bool _16;
    bool _7 = Char_lower_MINUS_case_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_upper_MINUS_case_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

bool Char_alphanum_QMARK_(char c) {
    bool _16;
    bool _7 = Char_alpha_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_num_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

int Char_hash(char* k) {
    char _9 = Char_copy(k);
    char _10 = _9; // From the 'the' function.
    int _11 = Char_to_MINUS_int(_10);
    return _11;
}

bool Char_lower_MINUS_case_QMARK_(char c) {
    bool _18;
    bool _8 = _LT__EQ___char('a', c);
    if (_8) {
        bool _13 = _LT__EQ___char(c, 'z');
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

int Char_meaning(char* char_MINUS_ref) {
    int _134;
    char _8 = Char_copy(char_MINUS_ref);
    bool _10 = Char__EQ_(_8, '0');
    if (_10) {
        int _13 = 0;
        _134 = _13;
    } else {
        int _132;
        char _19 = Char_copy(char_MINUS_ref);
        bool _21 = Char__EQ_(_19, '1');
        if (_21) {
            int _24 = 1;
            _132 = _24;
        } else {
            int _130;
            char _30 = Char_copy(char_MINUS_ref);
            bool _32 = Char__EQ_(_30, '2');
            if (_32) {
                int _35 = 2;
                _130 = _35;
            } else {
                int _128;
                char _41 = Char_copy(char_MINUS_ref);
                bool _43 = Char__EQ_(_41, '3');
                if (_43) {
                    int _46 = 3;
                    _128 = _46;
                } else {
                    int _126;
                    char _52 = Char_copy(char_MINUS_ref);
                    bool _54 = Char__EQ_(_52, '4');
                    if (_54) {
                        int _57 = 4;
                        _126 = _57;
                    } else {
                        int _124;
                        char _63 = Char_copy(char_MINUS_ref);
                        bool _65 = Char__EQ_(_63, '5');
                        if (_65) {
                            int _68 = 5;
                            _124 = _68;
                        } else {
                            int _122;
                            char _74 = Char_copy(char_MINUS_ref);
                            bool _76 = Char__EQ_(_74, '6');
                            if (_76) {
                                int _79 = 6;
                                _122 = _79;
                            } else {
                                int _120;
                                char _85 = Char_copy(char_MINUS_ref);
                                bool _87 = Char__EQ_(_85, '7');
                                if (_87) {
                                    int _90 = 7;
                                    _120 = _90;
                                } else {
                                    int _118;
                                    char _96 = Char_copy(char_MINUS_ref);
                                    bool _98 = Char__EQ_(_96, '8');
                                    if (_98) {
                                        int _101 = 8;
                                        _118 = _101;
                                    } else {
                                        int _116;
                                        char _107 = Char_copy(char_MINUS_ref);
                                        bool _109 = Char__EQ_(_107, '9');
                                        if (_109) {
                                            int _112 = 9;
                                            _116 = _112;
                                        } else {
                                            int _115 = -1;
                                            _116 = _115;
                                        }
                                        int _117 = _116;
                                        _118 = _117;
                                    }
                                    int _119 = _118;
                                    _120 = _119;
                                }
                                int _121 = _120;
                                _122 = _121;
                            }
                            int _123 = _122;
                            _124 = _123;
                        }
                        int _125 = _124;
                        _126 = _125;
                    }
                    int _127 = _126;
                    _128 = _127;
                }
                int _129 = _128;
                _130 = _129;
            }
            int _131 = _130;
            _132 = _131;
        }
        int _133 = _132;
        _134 = _133;
    }
    return _134;
}

bool Char_num_QMARK_(char c) {
    bool _18;
    bool _8 = _LT__EQ___char('0', c);
    if (_8) {
        bool _13 = _LT__EQ___char(c, '9');
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

char Char_random() {
    int _5 = Int_random();
    char _6 = Char_from_MINUS_int(_5);
    return _6;
}

char Char_random_MINUS_between(char a, char b) {
    int _9 = Char_to_MINUS_int(a);
    int _12 = Char_to_MINUS_int(b);
    int _13 = Int_random_MINUS_between(_9, _12);
    char _14 = Char_from_MINUS_int(_13);
    return _14;
}

bool Char_upper_MINUS_case_QMARK_(char c) {
    bool _18;
    bool _8 = _LT__EQ___char('A', c);
    if (_8) {
        bool _13 = _LT__EQ___char(c, 'Z');
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

bool CharRef__DIV__EQ_(char* a, char* b) {
    char _8 = Char_copy(a);
    char _11 = Char_copy(b);
    bool _12 = Char__DIV__EQ_(_8, _11);
    return _12;
}

bool CharRef__LT_(char* a, char* b) {
    char _8 = Char_copy(a);
    char _11 = Char_copy(b);
    bool _12 = Char__LT_(_8, _11);
    return _12;
}

bool CharRef__EQ_(char* a, char* b) {
    char _8 = Char_copy(a);
    char _11 = Char_copy(b);
    bool _12 = Char__EQ_(_8, _11);
    return _12;
}

bool CharRef__GT_(char* a, char* b) {
    char _8 = Char_copy(a);
    char _11 = Char_copy(b);
    bool _12 = Char__GT_(_8, _11);
    return _12;
}

bool Double__DIV__EQ_(double x, double y) {
    bool _9 = Double__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

double Double_add_MINUS_ref(double* x, double* y) {
    double _8 = Double_copy(x);
    double _11 = Double_copy(y);
    double _12 = Double__PLUS_(_8, _11);
    return _12;
}

bool Double_approx(double x, double y) {
    bool _28;
    bool _9 = Double__GT_(x, y);
    if (_9) {
        double _15 = Double__MINUS_(x, y);
        bool _17 = Double__LT_(_15, 1.0e-5);
        bool _18 = _17;
        _28 = _18;
    } else {
        double _24 = Double__MINUS_(y, x);
        bool _26 = Double__LT_(_24, 1.0e-5);
        bool _27 = _26;
        _28 = _27;
    }
    return _28;
}

double Double_clamp__double(double min, double max, double val) {
    double _28;
    bool _10 = Double__GT_(val, max);
    if (_10) {
        double _13 = max;
        _28 = _13;
    } else {
        double _26;
        bool _19 = Double__LT_(val, min);
        if (_19) {
            double _22 = min;
            _26 = _22;
        } else {
            double _25 = val;
            _26 = _25;
        }
        double _27 = _26;
        _28 = _27;
    }
    return _28;
}

int Double_hash(double* k) {
    double _8 = Double_copy(k);
    long _9 = Double_to_MINUS_bytes(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Double_prn(double x) {
    String _6 = Double_str(x);
    return _6;
}

double Double_random() {
    double _7 = Double_from_MINUS_int(CARP_INT_MAX);
    double _8 = Double_random_MINUS_between(0.0, _7);
    return _8;
}

double Double_random_MINUS_between(double lower, double upper) {
    double _20;
    /* let */ {
        double _10 = Double__MINUS_(upper, lower);
        double diff = _10;
        double _16 = Random_random();
        double _17 = Double__MUL_(diff, _16);
        double _19 = Double__PLUS_(_17, lower);
        _20 = _19;
    }
    return _20;
}

double Double_zero() {
    return 0.0;
}

bool DoubleRef__LT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__LT_(_8, _11);
    return _12;
}

bool DoubleRef__EQ_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__EQ_(_8, _11);
    return _12;
}

bool DoubleRef__GT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__GT_(_8, _11);
    return _12;
}

String Filepath__Lambda_dir_MINUS_from_MINUS_path_44(String* s) {
    String _39 = String_str(s);
    static String _41 = "/";
    String *_41_ref = &_41;
    String _42 = String_str(_41_ref);
    String _43 = StringCopy_append(_39, _42);
    return _43;
}

String Filepath_dir_MINUS_from_MINUS_path(String* path) {
    String _52;
    /* let */ {
        Array _10 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(char) * 1) };
        ((char*)_10.data)[0] = '/';
        Array__char* _11 = &_10; // ref
        Array__String _12 = String_split_MINUS_by(path, _11);
        Array__String segments = _12;
        Array__String* _18 = &segments; // ref
        int _19 = Array_length__String(_18);
        int _20 = Int_dec(_19);
        int n = _20;
        Array__String* _25 = &segments; // ref
        Array__String _27 = Array_prefix_MINUS_array__String(_25, n);
        Array__String without_MINUS_last = _27;
        // This lambda captures 0 variables: 
        Lambda _44 = {
          .callback = Filepath__Lambda_dir_MINUS_from_MINUS_path_44,
          .env = NULL,
          .delete = NULL,
          .copy = NULL
        };
        Lambda* _45 = &_44; // ref
        Array__String* _48 = &without_MINUS_last; // ref
        Array__String _49 = Array_copy_MINUS_map__String_String(_45, _48);
        Array__String* _50 = &_49; // ref
        String _51 = String_concat(_50);
        _52 = _51;
        Array_delete__String(_49);
        Array_delete__String(segments);
        Array_delete__String(without_MINUS_last);
        Array_delete__char(_10);
        Function_delete__String_MUL__String(_44);
    }
    return _52;
}

String Filepath_file_MINUS_from_MINUS_path(String* path) {
    String _19;
    /* let */ {
        Array _10 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(char) * 1) };
        ((char*)_10.data)[0] = '/';
        Array__char* _11 = &_10; // ref
        Array__String _12 = String_split_MINUS_by(path, _11);
        Array__String segments = _12;
        Array__String* _17 = &segments; // ref
        String _18 = Array_unsafe_MINUS_last__String(_17);
        _19 = _18;
        Array_delete__String(segments);
        Array_delete__char(_10);
    }
    return _19;
}

bool Float__DIV__EQ_(float x, float y) {
    bool _9 = Float__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

float Float_add_MINUS_ref(float* x, float* y) {
    float _8 = Float_copy(x);
    float _11 = Float_copy(y);
    float _12 = Float__PLUS_(_8, _11);
    return _12;
}

bool Float_approx(float x, float y) {
    bool _28;
    bool _9 = Float__GT_(x, y);
    if (_9) {
        float _15 = Float__MINUS_(x, y);
        bool _17 = Float__LT_(_15, 1.0e-5f);
        bool _18 = _17;
        _28 = _18;
    } else {
        float _24 = Float__MINUS_(y, x);
        bool _26 = Float__LT_(_24, 1.0e-5f);
        bool _27 = _26;
        _28 = _27;
    }
    return _28;
}

int Float_hash(float* k) {
    float _7 = Float_copy(k);
    int _8 = Float_to_MINUS_bytes(_7);
    return _8;
}

String Float_prn(float x) {
    String _6 = Float_str(x);
    return _6;
}

float Float_random() {
    float _7 = Float_from_MINUS_int(CARP_INT_MAX);
    float _8 = Float_random_MINUS_between(0.0f, _7);
    return _8;
}

float Float_random_MINUS_between(float lower, float upper) {
    float _24;
    /* let */ {
        float _10 = Float__MINUS_(upper, lower);
        float diff = _10;
        double _17 = Double_from_MINUS_float(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        float _21 = Double_to_MINUS_float(_20);
        float _23 = Float__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

float Float_zero() {
    return 0.0f;
}

bool FloatRef__LT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__LT_(_8, _11);
    return _12;
}

bool FloatRef__EQ_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__EQ_(_8, _11);
    return _12;
}

bool FloatRef__GT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__GT_(_8, _11);
    return _12;
}

void Function_delete__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__SDLApp_MUL__void (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__String_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__VectorN__double_double (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__double_MUL__double (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__double_bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__double_double (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__double_double_MUL__double (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__double_double_double (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int_bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

int Heap_lchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(1, _9);
    return _10;
}

int Heap_parent(int i) {
    int _8 = Int__MINUS_(i, 1);
    int _10 = Int__DIV_(_8, 2);
    return _10;
}

int Heap_rchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(2, _9);
    return _10;
}

String IO_read_MINUS__GT_EOF(String* filename) {
    String _48;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        FILE* _9 = IO_fopen(filename, _8_ref);
        FILE* f = _9;
        char _13 = Char_from_MINUS_int(0);
        char c = _13;
        Array _15 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(char) * 0) };
        Array__char r = _15;
        char _24 = IO_fgetc(f);
        c = _24;  // Char = Char
        bool _29 = Char__DIV__EQ_(c, IO_EOF);
        bool _30 = _29;
        bool _38 = _30;
        while (_38) {
            Array__char _36 = Array_push_MINUS_back__char(r, c);
            r = _36;  // (Array Char) = (Array Char)
            char _24 = IO_fgetc(f);
            c = _24;  // Char = Char
            bool _29 = Char__DIV__EQ_(c, IO_EOF);
            bool _30 = _29;
            _38 = _30;
        }
        IO_fclose(f);
        Array__char* _45 = &r; // ref
        String _46 = String_from_MINUS_chars(_45);
        String _47 = _46;
        _48 = _47;
        Array_delete__char(r);
    }
    return _48;
}

int Int_add_MINUS_ref(int* x, int* y) {
    int _8 = Int_copy(x);
    int _11 = Int_copy(y);
    int _12 = Int__PLUS_(_8, _11);
    return _12;
}

bool Int_even_QMARK_(int a) {
    int _8 = Int_mod(a, 2);
    bool _10 = Int__EQ_(_8, 0);
    return _10;
}

int Int_hash(int* k) {
    int _8 = Int_copy(k);
    int _9 = _8; // From the 'the' function.
    return _9;
}

bool Int_odd_QMARK_(int a) {
    bool _7 = Int_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

int Int_positive_MINUS_mod(int k, int n) {
    int _27;
    /* let */ {
        int _10 = Int_mod(k, n);
        int r = _10;
        int _26;
        bool _16 = Int__GT_(0, r);
        if (_16) {
            int _21 = Int__PLUS_(r, n);
            int _22 = _21;
            _26 = _22;
        } else {
            int _25 = r;
            _26 = _25;
        }
        _27 = _26;
    }
    return _27;
}

int Int_pow(int x, int y) {
    int _55;
    /* let */ {
        int r = 1;
        bool _14 = Int__DIV__EQ_(y, 0);
        bool _52 = _14;
        while (_52) {
            int _21 = Int_bit_MINUS_and(y, 1);
            bool _23 = Int__DIV__EQ_(_21, 0);
            if (_23) {
                int _30 = Int__MUL_(r, x);
                r = _30;  // Int = Int
            } else {
                /* () */
            }
            int _42 = Int__DIV_(y, 2);
            y = _42;  // Int = Int
            int _49 = Int__MUL_(x, x);
            x = _49;  // Int = Int
            bool _14 = Int__DIV__EQ_(y, 0);
            _52 = _14;
        }
        int _54 = r;
        _55 = _54;
    }
    return _55;
}

String Int_prn(int x) {
    String _6 = Int_str(x);
    return _6;
}

int Int_random() {
    int _6 = Int_random_MINUS_between(0, CARP_INT_MAX);
    return _6;
}

int Int_random_MINUS_between(int lower, int upper) {
    int _24;
    /* let */ {
        int _10 = Int__MINUS_(upper, lower);
        int diff = _10;
        double _17 = Double_from_MINUS_int(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        int _21 = Double_to_MINUS_int(_20);
        int _23 = Int__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

int Int_to_MINUS_int__int(int a) {
    return a;
}

int Int_zero() {
    return 0;
}

bool IntRef__DIV__EQ_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__DIV__EQ_(_8, _11);
    return _12;
}

bool IntRef__LT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__LT_(_8, _11);
    return _12;
}

bool IntRef__EQ_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__EQ_(_8, _11);
    return _12;
}

bool IntRef__GT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__GT_(_8, _11);
    return _12;
}

String IntRef_prn(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

String IntRef_str(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

bool Long__DIV__EQ_(long x, long y) {
    bool _9 = Long__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

bool Long_even_QMARK_(long a) {
    long _8 = Long_mod(a, 2l);
    bool _10 = Long__EQ_(_8, 0l);
    return _10;
}

int Long_hash(long* k) {
    long _9 = Long_copy(k);
    long _10 = _9; // From the 'the' function.
    int _11 = Long_to_MINUS_int(_10);
    return _11;
}

bool Long_odd_QMARK_(long a) {
    bool _7 = Long_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

String Long_prn(long x) {
    String _6 = Long_str(x);
    return _6;
}

long Long_random() {
    long _7 = Long_from_MINUS_int(CARP_INT_MAX);
    long _8 = Long_random_MINUS_between(0l, _7);
    return _8;
}

long Long_random_MINUS_between(long lower, long upper) {
    long _24;
    /* let */ {
        long _10 = Long__MINUS_(upper, lower);
        long diff = _10;
        double _17 = Double_from_MINUS_long(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        long _21 = Double_to_MINUS_long(_20);
        long _23 = Long__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

bool LongRef__LT_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__LT_(_8, _11);
    return _12;
}

bool LongRef__EQ_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__EQ_(_8, _11);
    return _12;
}

bool LongRef__GT_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__GT_(_8, _11);
    return _12;
}

Maybe__VectorN__double Maybe_Just__VectorN__double(VectorN__double member0) {
    Maybe__VectorN__double instance;
    instance.Just.member0 = member0;
    instance._tag = Maybe__VectorN__double_Just_tag;
    return instance;
}

Maybe__bool Maybe_Just__bool(bool member0) {
    Maybe__bool instance;
    instance.Just.member0 = member0;
    instance._tag = Maybe__bool_Just_tag;
    return instance;
}

Maybe__double Maybe_Just__double(double member0) {
    Maybe__double instance;
    instance.Just.member0 = member0;
    instance._tag = Maybe__double_Just_tag;
    return instance;
}

Maybe__int Maybe_Just__int(int member0) {
    Maybe__int instance;
    instance.Just.member0 = member0;
    instance._tag = Maybe__int_Just_tag;
    return instance;
}

Maybe__VectorN__double Maybe_Nothing__VectorN__double() {
    Maybe__VectorN__double instance;

    instance._tag = Maybe__VectorN__double_Nothing_tag;
    return instance;
}

Maybe__bool Maybe_Nothing__bool() {
    Maybe__bool instance;

    instance._tag = Maybe__bool_Nothing_tag;
    return instance;
}

Maybe__double Maybe_Nothing__double() {
    Maybe__double instance;

    instance._tag = Maybe__double_Nothing_tag;
    return instance;
}

Maybe__int Maybe_Nothing__int() {
    Maybe__int instance;

    instance._tag = Maybe__int_Nothing_tag;
    return instance;
}

Maybe__double Maybe_apply__VectorN__double_double(Maybe__VectorN__double a, Lambda f) {
    Maybe__double _19;
    if(a._tag == Maybe__VectorN__double_Nothing_tag) {
        Maybe__VectorN__double _6_temp = a;
        Maybe__double _10 = Maybe_Nothing__double();
        _19 = _10;
    }
    else if(a._tag == Maybe__VectorN__double_Just_tag) {
        Maybe__VectorN__double _6_temp = a;
        VectorN__double x = _6_temp.Just.member0;
        double _17 = f.env ? ((double(*)(LambdaEnv, VectorN__double))f.callback)(f.env, x) : ((double(*)(VectorN__double))f.callback)(x);
        Maybe__double _18 = Maybe_Just__double(_17);
        _19 = _18;
    }
    else {
      // This will not be needed with static exhaustiveness checking in 'match' expressions:
      fprintf(stderr, "Unhandled case in 'match' expression at line 8, column 5 in '/Users/erik/Projects/Carp/core/Maybe.carp'\n");
      exit(1);
    }
    Function_delete__VectorN__double_double(f);
    return _19;
}

Maybe__bool Maybe_apply__double_bool(Maybe__double a, Lambda f) {
    Maybe__bool _19;
    if(a._tag == Maybe__double_Nothing_tag) {
        Maybe__double _6_temp = a;
        Maybe__bool _10 = Maybe_Nothing__bool();
        _19 = _10;
    }
    else if(a._tag == Maybe__double_Just_tag) {
        Maybe__double _6_temp = a;
        double x = _6_temp.Just.member0;
        bool _17 = f.env ? ((bool(*)(LambdaEnv, double))f.callback)(f.env, x) : ((bool(*)(double))f.callback)(x);
        Maybe__bool _18 = Maybe_Just__bool(_17);
        _19 = _18;
    }
    else {
      // This will not be needed with static exhaustiveness checking in 'match' expressions:
      fprintf(stderr, "Unhandled case in 'match' expression at line 8, column 5 in '/Users/erik/Projects/Carp/core/Maybe.carp'\n");
      exit(1);
    }
    Function_delete__double_bool(f);
    return _19;
}

Maybe__double Maybe_apply__double_double(Maybe__double a, Lambda f) {
    Maybe__double _19;
    if(a._tag == Maybe__double_Nothing_tag) {
        Maybe__double _6_temp = a;
        Maybe__double _10 = Maybe_Nothing__double();
        _19 = _10;
    }
    else if(a._tag == Maybe__double_Just_tag) {
        Maybe__double _6_temp = a;
        double x = _6_temp.Just.member0;
        double _17 = f.env ? ((double(*)(LambdaEnv, double))f.callback)(f.env, x) : ((double(*)(double))f.callback)(x);
        Maybe__double _18 = Maybe_Just__double(_17);
        _19 = _18;
    }
    else {
      // This will not be needed with static exhaustiveness checking in 'match' expressions:
      fprintf(stderr, "Unhandled case in 'match' expression at line 8, column 5 in '/Users/erik/Projects/Carp/core/Maybe.carp'\n");
      exit(1);
    }
    Function_delete__double_double(f);
    return _19;
}

void Maybe_delete__VectorN__double(Maybe__VectorN__double p) {
  if(p._tag == Maybe__VectorN__double_Just_tag) {
    VectorN_delete__double(p.Just.member0);
  }
  else if(p._tag == Maybe__VectorN__double_Nothing_tag) {

  }

}

void Maybe_delete__bool(Maybe__bool p) {
  if(p._tag == Maybe__bool_Just_tag) {
    /* Ignore non-managed member 'Just.member0' : Bool */
  }
  else if(p._tag == Maybe__bool_Nothing_tag) {

  }

}

void Maybe_delete__double(Maybe__double p) {
  if(p._tag == Maybe__double_Just_tag) {
    /* Ignore non-managed member 'Just.member0' : Double */
  }
  else if(p._tag == Maybe__double_Nothing_tag) {

  }

}

void Maybe_delete__int(Maybe__int p) {
  if(p._tag == Maybe__int_Just_tag) {
    /* Ignore non-managed member 'Just.member0' : Int */
  }
  else if(p._tag == Maybe__int_Nothing_tag) {

  }

}

Pattern Pattern_from_MINUS_chars(Array__char* chars) {
    static String _9 = "[";
    String *_9_ref = &_9;
    String _10 = String_copy(_9_ref);
    String _11 = StringCopy_str(_10);
    String _16 = String_from_MINUS_chars(chars);
    String _17 = StringCopy_str(_16);
    static String _20 = "]";
    String *_20_ref = &_20;
    String _21 = String_copy(_20_ref);
    String _22 = StringCopy_str(_21);
    String _23 = StringCopy_append(_17, _22);
    String _24 = StringCopy_append(_11, _23);
    String* _25 = &_24; // ref
    Pattern _26 = Pattern_init(_25);
    String_delete(_24);
    return _26;
}

bool Pattern_matches_QMARK_(Pattern* pat, String* s) {
    int _9 = Pattern_find(pat, s);
    bool _11 = Int__DIV__EQ_(_9, -1);
    return _11;
}

SDL_Renderer* Pointer_copy__SDL_Renderer (SDL_Renderer** ptrRef) {
    return *ptrRef;
}

SDL_Texture* Pointer_copy__SDL_Texture (SDL_Texture** ptrRef) {
    return *ptrRef;
}

SDL_Window* Pointer_copy__SDL_Window (SDL_Window** ptrRef) {
    return *ptrRef;
}

bool Pointer_eq__SDL_Texture (SDL_Texture *p1, SDL_Texture *p2) {
    return p1 == p2;
}

double Random_random() {
    double _11 = Double__MUL_(Random_s, Random_a);
    double _13 = Double__PLUS_(_11, Random_c);
    double _15 = Double_mod(_13, Random_m);
    Random_s = _15;  // Double = Double
    double _20 = Double__DIV_(Random_s, Random_m);
    double _21 = _20;
    return _21;
}

void Random_seed() {
    long _7 = System_nanotime();
    double _8 = Double_from_MINUS_long(_7);
    Random_s = _8;  // Double = Double
}

void Random_seed_MINUS_from(double new_MINUS_seed) {
    Random_s = new_MINUS_seed;  // Double = Double
}

bool RefBool__EQ_(bool* a, bool* b) {
    bool _8 = Bool_copy(a);
    bool _11 = Bool_copy(b);
    bool _12 = Bool__EQ_(_8, _11);
    return _12;
}

Array__SDL_Event SDL_Event_all() {
    Array__SDL_Event _27;
    /* let */ {
        Array _5 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(SDL_Event) * 0) };
        Array__SDL_Event events = _5;
        SDL_Event _8 = SDL_Event_init();
        SDL_Event e = _8;
        bool _16 = SDL_PollEvent(&e);
        bool _24 = _16;
        while (_24) {
            Array__SDL_Event _22 = Array_push_MINUS_back__SDL_Event(events, e);
            events = _22;  // (Array SDL_Event) = (Array SDL_Event)
            bool _16 = SDL_PollEvent(&e);
            _24 = _16;
        }
        Array__SDL_Event _26 = events;
        _27 = _26;
    }
    return _27;
}

bool SDL_Keycode__DIV__EQ_(SDL_Keycode x, SDL_Keycode y) {
    bool _9 = SDL_Keycode__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

bool SDL_Keycode__EQ_(SDL_Keycode a, SDL_Keycode b) {
    SDL_Keycode _10 = a; // From the 'the' function.
    int _11 = enum_MINUS_to_MINUS_int__SDL_Keycode(_10);
    SDL_Keycode _16 = b; // From the 'the' function.
    int _17 = enum_MINUS_to_MINUS_int__SDL_Keycode(_16);
    bool _18 = Int__EQ_(_11, _17);
    return _18;
}

String SDL_Keycode_prn(SDL_Keycode x) {
    String _6 = SDL_Keycode_str(x);
    return _6;
}

MouseState SDL_MouseState_copy(MouseState* pRef) {
    MouseState copy = *pRef;
    /* Ignore non-managed member 'x' : Int */
    /* Ignore non-managed member 'y' : Int */
    /* Ignore non-managed member 'left' : Bool */
    /* Ignore non-managed member 'right' : Bool */
    return copy;
}

void SDL_MouseState_delete(MouseState p) {
    /* Ignore non-managed member 'x' : Int */
    /* Ignore non-managed member 'y' : Int */
    /* Ignore non-managed member 'left' : Bool */
    /* Ignore non-managed member 'right' : Bool */
}

MouseState SDL_MouseState_get() {
    MouseState _44;
    /* let */ {
        int x = 0;
        int y = 0;
        int _16 = SDL_GetMouseState(&x, &y);
        int state = _16;
        int _24 = SDL_BUTTON(SDL_BUTTON_LEFT);
        int _25 = Int_bit_MINUS_and(state, _24);
        bool _26 = Int__DIV__EQ_(0, _25);
        bool l = _26;
        int _34 = SDL_BUTTON(SDL_BUTTON_RIGHT);
        int _35 = Int_bit_MINUS_and(state, _34);
        bool _36 = Int__DIV__EQ_(0, _35);
        bool r = _36;
        MouseState _43 = SDL_MouseState_init(x, y, l, r);
        _44 = _43;
    }
    return _44;
}

MouseState SDL_MouseState_init(int x, int y, bool left, bool right) {
    MouseState instance;
    instance.x = x;
    instance.y = y;
    instance.left = left;
    instance.right = right;
    return instance;
}

bool* SDL_MouseState_left(MouseState* p) { return (&(p->left)); }

String SDL_MouseState_prn(MouseState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "MouseState");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "MouseState");
  bufferPtr += strlen("MouseState") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

bool* SDL_MouseState_right(MouseState* p) { return (&(p->right)); }

MouseState SDL_MouseState_set_MINUS_left(MouseState p, bool newValue) {
    /* Ignore non-managed member 'left' : Bool */
    p.left = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_left_BANG_(MouseState* pRef, bool newValue) {
    pRef->left = newValue;
}


MouseState SDL_MouseState_set_MINUS_right(MouseState p, bool newValue) {
    /* Ignore non-managed member 'right' : Bool */
    p.right = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_right_BANG_(MouseState* pRef, bool newValue) {
    pRef->right = newValue;
}


MouseState SDL_MouseState_set_MINUS_x(MouseState p, int newValue) {
    /* Ignore non-managed member 'x' : Int */
    p.x = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_x_BANG_(MouseState* pRef, int newValue) {
    pRef->x = newValue;
}


MouseState SDL_MouseState_set_MINUS_y(MouseState p, int newValue) {
    /* Ignore non-managed member 'y' : Int */
    p.y = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_y_BANG_(MouseState* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_MouseState_str(MouseState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "MouseState");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "MouseState");
  bufferPtr += strlen("MouseState") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

MouseState SDL_MouseState_update_MINUS_left(MouseState p, Lambda *updater) {
    p.left = (*updater).env ? ((Fn__LambdaEnv_bool_bool)(*updater).callback)((*updater).env, p.left) : ((Fn__bool_bool)(*updater).callback)(p.left);
    return p;
}


MouseState SDL_MouseState_update_MINUS_right(MouseState p, Lambda *updater) {
    p.right = (*updater).env ? ((Fn__LambdaEnv_bool_bool)(*updater).callback)((*updater).env, p.right) : ((Fn__bool_bool)(*updater).callback)(p.right);
    return p;
}


MouseState SDL_MouseState_update_MINUS_x(MouseState p, Lambda *updater) {
    p.x = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.x) : ((Fn__int_int)(*updater).callback)(p.x);
    return p;
}


MouseState SDL_MouseState_update_MINUS_y(MouseState p, Lambda *updater) {
    p.y = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.y) : ((Fn__int_int)(*updater).callback)(p.y);
    return p;
}


int* SDL_MouseState_x(MouseState* p) { return (&(p->x)); }

int* SDL_MouseState_y(MouseState* p) { return (&(p->y)); }

void SDL_bg(SDL_Renderer* rend, SDL_Color* color) {
    int _12 = SDL_Color_r(color);
    int _15 = SDL_Color_g(color);
    int _18 = SDL_Color_b(color);
    SDL_SetRenderDrawColor(rend, _12, _15, _18, 255);
    SDL_RenderClear(rend);
}

SDL_Rect SDL_dimensions(SDL_Texture* texture) {
    SDL_Rect _29;
    /* let */ {
        int w = 0;
        int h = 0;
        SDL_QueryTexture(texture, NULL, NULL, &w, &h);
        SDL_Rect _27 = SDL_rect(0, 0, w, h);
        SDL_Rect _28 = _27;
        _29 = _28;
    }
    return _29;
}

void SDL_draw_MINUS_texture(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point) {
    /* let */ {
        SDL_Rect _10 = SDL_dimensions(texture);
        SDL_Rect dims = _10;
        int* _16 = SDL_Point_x(point);
        int _17 = Int_copy(_16);
        int* _21 = SDL_Point_y(point);
        int _22 = Int_copy(_21);
        SDL_Rect* _27 = &dims; // ref
        int* _28 = SDL_Rect_w(_27);
        int _29 = Int_copy(_28);
        SDL_Rect* _34 = &dims; // ref
        int* _35 = SDL_Rect_h(_34);
        int _36 = Int_copy(_35);
        SDL_Rect _37 = SDL_rect(_17, _22, _29, _36);
        SDL_Rect dest = _37;
        SDL_RenderCopy(rend, texture, &dims, &dest);
    }
}

void SDL_draw_MINUS_texture_MINUS_centered(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point) {
    /* let */ {
        SDL_Rect _10 = SDL_dimensions(texture);
        SDL_Rect dims = _10;
        SDL_Rect* _16 = &dims; // ref
        int* _17 = SDL_Rect_w(_16);
        int _18 = Int_copy(_17);
        int w = _18;
        SDL_Rect* _24 = &dims; // ref
        int* _25 = SDL_Rect_h(_24);
        int _26 = Int_copy(_25);
        int h = _26;
        int* _33 = SDL_Point_x(point);
        int _34 = Int_copy(_33);
        int _38 = Int__DIV_(w, 2);
        int _39 = Int__MINUS_(_34, _38);
        int* _44 = SDL_Point_y(point);
        int _45 = Int_copy(_44);
        int _49 = Int__DIV_(h, 2);
        int _50 = Int__MINUS_(_45, _49);
        SDL_Rect _53 = SDL_rect(_39, _50, w, h);
        SDL_Rect dest = _53;
        SDL_RenderCopy(rend, texture, &dims, &dest);
    }
}

SDLApp SDLApp_copy(SDLApp* pRef) {
    SDLApp copy = *pRef;
    /* Ignore non-managed member 'window' : (Ptr SDL_Window) */
    /* Ignore non-managed member 'renderer' : (Ptr SDL_Renderer) */
    /* Ignore non-managed member 'fps' : Int */
    return copy;
}

SDLApp SDLApp_create(String* title, int width, int height) {
    SDLApp _44;
    /* let */ {
        int _ = SDL_INIT_EVERYTHING;
        SDL_Window* win = NULL;
        SDL_Renderer* ren = NULL;
        static String _18 = "1";
        String *_18_ref = &_18;
        char* _19 = String_cstr(_18_ref);
        SDL_SetHint(SDL_HINT_RENDER_VSYNC, _19);
        SDL_CreateWindowAndRenderer(width, height, 0, &win, &ren);
        char* _36 = String_cstr(title);
        SDL_SetWindowTitle(win, _36);
        SDLApp _42 = SDLApp_init(win, ren, 60);
        SDLApp _43 = _42;
        _44 = _43;
    }
    return _44;
}

void SDLApp_delete(SDLApp p) {
    /* Ignore non-managed member 'window' : (Ptr SDL_Window) */
    /* Ignore non-managed member 'renderer' : (Ptr SDL_Renderer) */
    /* Ignore non-managed member 'fps' : Int */
}

int* SDLApp_fps(SDLApp* p) { return (&(p->fps)); }

SDLApp SDLApp_init(SDL_Window* window, SDL_Renderer* renderer, int fps) {
    SDLApp instance;
    instance.window = window;
    instance.renderer = renderer;
    instance.fps = fps;
    return instance;
}

String SDLApp_prn(SDLApp *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDLApp");
  size +=  snprintf(NULL, 0, "%p ", p->window);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->renderer);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDLApp");
  bufferPtr += strlen("SDLApp") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->window);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->window);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->renderer);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->renderer);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

void SDLApp_quit_MINUS_on_MINUS_esc(SDLApp* app) {
    /* let */ {
        Array__SDL_Event _8 = SDL_Event_all();
        Array__SDL_Event* _9 = &_8; // ref
        Array__SDL_Event* xs = _9;
        int _13 = Array_length__SDL_Event(xs);
        int len = _13;
        /* let */ {
            int i = 0;
            bool _23 = Int__LT_(i, len);
            bool _90 = _23;
            while (_90) {
                /* let */ {
                    SDL_Event* _30 = Array_nth__SDL_Event(xs, i);
                    SDL_Event* event = _30;
                    SDL_EventType _36 = SDL_Event_type(event);
                    bool _38 = SDL_Event__EQ_(_36, SDL_QUIT);
                    if (_38) {
                        SDLApp_stop__void(app);
                    } else {
                        SDL_EventType _49 = SDL_Event_type(event);
                        bool _51 = SDL_Event__EQ_(_49, SDL_KEYDOWN);
                        if (_51) {
                            /* let */ {
                                SDL_Keycode _57 = SDL_Event_keycode(event);
                                SDL_Keycode key = _57;
                                bool _63 = SDL_Keycode__EQ_(key, SDLK_ESCAPE);
                                if (_63) {
                                    SDLApp_stop__void(app);
                                } else {
                                    /* () */
                                }
                            }
                        } else {
                            /* () */
                        }
                    }
                }
                int _87 = Int__PLUS_(i, 1);
                i = _87;  // Int = Int
                bool _23 = Int__LT_(i, len);
                _90 = _23;
            }
        }
        Array_delete__SDL_Event(_8);
    }
}

SDL_Renderer** SDLApp_renderer(SDLApp* p) { return (&(p->renderer)); }

void SDLApp_run_MINUS_with_MINUS_callbacks__int(SDLApp* app, Lambda event_MINUS_fn, Lambda update_MINUS_fn, Lambda draw_MINUS_fn, int initial_MINUS_state) {
    /* let */ {
        SDL_Renderer** _13 = SDLApp_renderer(app);
        SDL_Renderer* _14 = Pointer_copy__SDL_Renderer(_13);
        SDL_Renderer* rend = _14;
        int state = initial_MINUS_state;
        int _19 = SDL_GetTicks();
        int last_MINUS_t = _19;
        int* _26 = SDLApp_fps(app);
        int _27 = Int_copy(_26);
        int _28 = Int__DIV_(1000, _27);
        int target_MINUS_dt = _28;
        bool _88 = true;
        while (_88) {
            event_MINUS_fn.env ? ((void(*)(LambdaEnv, SDLApp*))event_MINUS_fn.callback)(event_MINUS_fn.env, app) : ((void(*)(SDLApp*))event_MINUS_fn.callback)(app);
            int _41 = update_MINUS_fn.env ? ((int(*)(LambdaEnv, int))update_MINUS_fn.callback)(update_MINUS_fn.env, state) : ((int(*)(int))update_MINUS_fn.callback)(state);
            state = _41;  // Int = Int
            /* let */ {
                int _47 = SDL_GetTicks();
                int _49 = Int__MINUS_(_47, last_MINUS_t);
                int dt = _49;
                int _54 = Int__MINUS_(target_MINUS_dt, dt);
                int time_MINUS_left = _54;
                bool _60 = pos_QMARK___int(time_MINUS_left);
                if (_60) {
                    SDL_Delay(time_MINUS_left);
                } else {
                    /* () */
                }
            }
            int _75 = SDL_GetTicks();
            last_MINUS_t = _75;  // Int = Int
            int* _82 = &state; // ref
            draw_MINUS_fn.env ? ((void(*)(LambdaEnv, SDLApp*, SDL_Renderer*, int*))draw_MINUS_fn.callback)(draw_MINUS_fn.env, app, rend, _82) : ((void(*)(SDLApp*, SDL_Renderer*, int*))draw_MINUS_fn.callback)(app, rend, _82);
            SDL_RenderPresent(rend);
            _88 = true;
        }
    }
    Function_delete__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void(draw_MINUS_fn);
    Function_delete__SDLApp_MUL__void(event_MINUS_fn);
    Function_delete__int_int(update_MINUS_fn);
}

SDLApp SDLApp_set_MINUS_fps(SDLApp p, int newValue) {
    /* Ignore non-managed member 'fps' : Int */
    p.fps = newValue;
    return p;
}


void SDLApp_set_MINUS_fps_BANG_(SDLApp* pRef, int newValue) {
    pRef->fps = newValue;
}


SDLApp SDLApp_set_MINUS_renderer(SDLApp p, SDL_Renderer* newValue) {
    /* Ignore non-managed member 'renderer' : (Ptr SDL_Renderer) */
    p.renderer = newValue;
    return p;
}


void SDLApp_set_MINUS_renderer_BANG_(SDLApp* pRef, SDL_Renderer* newValue) {
    pRef->renderer = newValue;
}


SDLApp SDLApp_set_MINUS_window(SDLApp p, SDL_Window* newValue) {
    /* Ignore non-managed member 'window' : (Ptr SDL_Window) */
    p.window = newValue;
    return p;
}


void SDLApp_set_MINUS_window_BANG_(SDLApp* pRef, SDL_Window* newValue) {
    pRef->window = newValue;
}


void SDLApp_stop__void(SDLApp* app) {
    SDL_Window** _9 = SDLApp_window(app);
    SDL_Window* _10 = Pointer_copy__SDL_Window(_9);
    SDL_DestroyWindow(_10);
    SDL_Quit();
    System_exit__void(0);
}

String SDLApp_str(SDLApp *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDLApp");
  size +=  snprintf(NULL, 0, "%p ", p->window);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->renderer);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDLApp");
  bufferPtr += strlen("SDLApp") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->window);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->window);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->renderer);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->renderer);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDLApp SDLApp_update_MINUS_fps(SDLApp p, Lambda *updater) {
    p.fps = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.fps) : ((Fn__int_int)(*updater).callback)(p.fps);
    return p;
}


SDLApp SDLApp_update_MINUS_renderer(SDLApp p, Lambda *updater) {
    p.renderer = (*updater).env ? ((Fn__LambdaEnv_SDL_Renderer_MUL__SDL_Renderer_MUL_)(*updater).callback)((*updater).env, p.renderer) : ((Fn__SDL_Renderer_MUL__SDL_Renderer_MUL_)(*updater).callback)(p.renderer);
    return p;
}


SDLApp SDLApp_update_MINUS_window(SDLApp p, Lambda *updater) {
    p.window = (*updater).env ? ((Fn__LambdaEnv_SDL_Window_MUL__SDL_Window_MUL_)(*updater).callback)((*updater).env, p.window) : ((Fn__SDL_Window_MUL__SDL_Window_MUL_)(*updater).callback)(p.window);
    return p;
}


SDL_Window** SDLApp_window(SDLApp* p) { return (&(p->window)); }

SDL_Point SDL_Point_init(int x, int y) {
    SDL_Point instance;
    instance.x = x;
    instance.y = y;
    return instance;
}

String SDL_Point_prn(SDL_Point *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Point");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Point");
  bufferPtr += strlen("SDL_Point") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Point SDL_Point_set_MINUS_x(SDL_Point p, int newValue) {
    /* Ignore non-managed member 'x' : Int */
    p.x = newValue;
    return p;
}


void SDL_Point_set_MINUS_x_BANG_(SDL_Point* pRef, int newValue) {
    pRef->x = newValue;
}


SDL_Point SDL_Point_set_MINUS_y(SDL_Point p, int newValue) {
    /* Ignore non-managed member 'y' : Int */
    p.y = newValue;
    return p;
}


void SDL_Point_set_MINUS_y_BANG_(SDL_Point* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_Point_str(SDL_Point *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Point");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Point");
  bufferPtr += strlen("SDL_Point") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Point SDL_Point_update_MINUS_x(SDL_Point p, Lambda *updater) {
    p.x = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.x) : ((Fn__int_int)(*updater).callback)(p.x);
    return p;
}


SDL_Point SDL_Point_update_MINUS_y(SDL_Point p, Lambda *updater) {
    p.y = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.y) : ((Fn__int_int)(*updater).callback)(p.y);
    return p;
}


int* SDL_Point_x(SDL_Point* p) { return (&(p->x)); }

int* SDL_Point_y(SDL_Point* p) { return (&(p->y)); }

int* SDL_Rect_h(SDL_Rect* p) { return (&(p->h)); }

SDL_Rect SDL_Rect_init(int x, int y, int w, int h) {
    SDL_Rect instance;
    instance.x = x;
    instance.y = y;
    instance.w = w;
    instance.h = h;
    return instance;
}

String SDL_Rect_prn(SDL_Rect *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Rect");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Rect");
  bufferPtr += strlen("SDL_Rect") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Rect SDL_Rect_set_MINUS_h(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'h' : Int */
    p.h = newValue;
    return p;
}


void SDL_Rect_set_MINUS_h_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->h = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_w(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'w' : Int */
    p.w = newValue;
    return p;
}


void SDL_Rect_set_MINUS_w_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->w = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_x(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'x' : Int */
    p.x = newValue;
    return p;
}


void SDL_Rect_set_MINUS_x_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->x = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_y(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'y' : Int */
    p.y = newValue;
    return p;
}


void SDL_Rect_set_MINUS_y_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_Rect_str(SDL_Rect *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Rect");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Rect");
  bufferPtr += strlen("SDL_Rect") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Rect SDL_Rect_update_MINUS_h(SDL_Rect p, Lambda *updater) {
    p.h = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.h) : ((Fn__int_int)(*updater).callback)(p.h);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_w(SDL_Rect p, Lambda *updater) {
    p.w = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.w) : ((Fn__int_int)(*updater).callback)(p.w);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_x(SDL_Rect p, Lambda *updater) {
    p.x = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.x) : ((Fn__int_int)(*updater).callback)(p.x);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_y(SDL_Rect p, Lambda *updater) {
    p.y = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.y) : ((Fn__int_int)(*updater).callback)(p.y);
    return p;
}


int* SDL_Rect_w(SDL_Rect* p) { return (&(p->w)); }

int* SDL_Rect_x(SDL_Rect* p) { return (&(p->x)); }

int* SDL_Rect_y(SDL_Rect* p) { return (&(p->y)); }

bool String__DIV__EQ_(String* a, String* b) {
    String* _12 = a; // From the 'the' function.
    bool _14 = String__EQ_(_12, b);
    bool _15 = not(_14);
    return _15;
}

bool String_alpha_QMARK_(String* s) {
    static String _5 = "^[\\u\\l]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_alphanum_QMARK_(String* s) {
    static String _5 = "^[\\w]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_chomp(String* s) {
    static String _5 = "\\n$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_collapse_MINUS_whitespace(String* s) {
    static String _5 = "\\s+";
    String *_5_ref = &_5;
    static String _7 = " ";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, -1);
    return _9;
}

String String_concat(Array__String* strings) {
    String _70;
    /* let */ {
        int j = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        int _15 = String_sum_MINUS_length(strings);
        String _17 = String_allocate(_15, ' ');
        String result = _17;
        /* let */ {
            int i = 0;
            bool _28 = Int__LT_(i, lstrings);
            bool _66 = _28;
            while (_66) {
                /* let */ {
                    String* _35 = Array_nth__String(strings, i);
                    String* str = _35;
                    int _39 = String_length(str);
                    int len = _39;
                    String* _45 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_45, j, str);
                    int _54 = Int__PLUS_(j, len);
                    j = _54;  // Int = Int
                }
                int _63 = Int__PLUS_(i, 1);
                i = _63;  // Int = Int
                bool _28 = Int__LT_(i, lstrings);
                _66 = _28;
            }
        }
        String _69 = result;
        _70 = _69;
    }
    return _70;
}

bool String_contains_QMARK_(String* s, char c) {
    int _9 = String_index_MINUS_of(s, c);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

int String_count_MINUS_char(String* s, char c) {
    int _54;
    /* let */ {
        int n = 0;
        /* let */ {
            int i = 0;
            int _19 = String_length(s);
            bool _20 = Int__LT_(i, _19);
            bool _50 = _20;
            while (_50) {
                char _28 = String_char_MINUS_at(s, i);
                bool _29 = Char__EQ_(c, _28);
                if (_29) {
                    int _35 = Int_inc(n);
                    n = _35;  // Int = Int
                } else {
                    /* () */
                }
                int _47 = Int__PLUS_(i, 1);
                i = _47;  // Int = Int
                int _19 = String_length(s);
                bool _20 = Int__LT_(i, _19);
                _50 = _20;
            }
        }
        int _53 = n;
        _54 = _53;
    }
    return _54;
}

bool String_empty_QMARK_(String* s) {
    int _7 = String_length(s);
    bool _9 = Int__EQ_(_7, 0);
    return _9;
}

bool String_ends_MINUS_with_QMARK_(String* s, String* sub) {
    int _13 = String_length(s);
    int _16 = String_length(sub);
    int _17 = Int__MINUS_(_13, _16);
    String _18 = String_suffix_MINUS_string(s, _17);
    String* _19 = &_18; // ref
    bool _20 = String__EQ_(sub, _19);
    String_delete(_18);
    return _20;
}

int String_hash(String* k) {
    int _69;
    /* let */ {
        int a = 31415;
        int b = 27183;
        int vh = 0;
        /* let */ {
            int x = 0;
            int _22 = String_length(k);
            bool _23 = Int__LT_(x, _22);
            bool _63 = _23;
            while (_63) {
                int _32 = Int__MUL_(a, vh);
                char _37 = String_char_MINUS_at(k, x);
                int _38 = Char_to_MINUS_int(_37);
                int _39 = Int__PLUS_(_32, _38);
                vh = _39;  // Int = Int
                int _46 = Int__MUL_(a, b);
                a = _46;  // Int = Int
                int _52 = Int_inc(x);
                x = _52;  // Int = Int
                int _60 = Int__PLUS_(x, 1);
                x = _60;  // Int = Int
                int _22 = String_length(k);
                bool _23 = Int__LT_(x, _22);
                _63 = _23;
            }
        }
        int _67 = Int_abs(vh);
        int _68 = _67;
        _69 = _68;
    }
    return _69;
}

char String_head(String* s) {
    char _7 = String_char_MINUS_at(s, 0);
    return _7;
}

bool String_hex_QMARK_(String* s) {
    static String _5 = "^[\\x]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_in_QMARK_(String* s, String* sub) {
    Pattern _9 = Pattern_init(sub);
    Pattern* _10 = &_9; // ref
    bool _12 = Pattern_matches_QMARK_(_10, s);
    Pattern_delete(_9);
    return _12;
}

String String_join(String sep, Array__String* strings) {
    String _117;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _16 = Int__MINUS_(lstrings, 1);
        int num_MINUS_seps = _16;
        String* _21 = &sep; // ref
        int _22 = String_length(_21);
        int sep_MINUS_length = _22;
        int _27 = Int__MUL_(num_MINUS_seps, sep_MINUS_length);
        int seps_MINUS_size = _27;
        int _34 = String_sum_MINUS_length(strings);
        int _35 = Int__PLUS_(seps_MINUS_size, _34);
        String _37 = String_allocate(_35, ' ');
        String result = _37;
        /* let */ {
            int i = 0;
            bool _48 = Int__LT_(i, lstrings);
            bool _113 = _48;
            while (_113) {
                /* let */ {
                    String* _55 = Array_nth__String(strings, i);
                    String* str = _55;
                    int _59 = String_length(str);
                    int len = _59;
                    bool _66 = Int__GT_(i, 0);
                    if (_66) {
                        String* _71 = &result; // ref
                        String* _75 = &sep; // ref
                        String_string_MINUS_set_MINUS_at_BANG_(_71, j, _75);
                        int _82 = Int__PLUS_(j, sep_MINUS_length);
                        j = _82;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _92 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_92, j, str);
                    int _101 = Int__PLUS_(j, len);
                    j = _101;  // Int = Int
                }
                int _110 = Int__PLUS_(i, 1);
                i = _110;  // Int = Int
                bool _48 = Int__LT_(i, lstrings);
                _113 = _48;
            }
        }
        String _116 = result;
        _117 = _116;
    }
    String_delete(sep);
    return _117;
}

String String_join_MINUS_with_MINUS_char(char sep, Array__String* strings) {
    String _104;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _16 = Int__MINUS_(lstrings, 1);
        int sep_MINUS_length = _16;
        int _23 = String_sum_MINUS_length(strings);
        int _24 = Int__PLUS_(sep_MINUS_length, _23);
        String _26 = String_allocate(_24, ' ');
        String result = _26;
        /* let */ {
            int i = 0;
            bool _37 = Int__LT_(i, lstrings);
            bool _100 = _37;
            while (_100) {
                /* let */ {
                    String* _44 = Array_nth__String(strings, i);
                    String* str = _44;
                    int _48 = String_length(str);
                    int len = _48;
                    bool _55 = Int__GT_(i, 0);
                    if (_55) {
                        String* _60 = &result; // ref
                        String_string_MINUS_set_BANG_(_60, j, sep);
                        int _69 = Int__PLUS_(j, 1);
                        j = _69;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _79 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_79, j, str);
                    int _88 = Int__PLUS_(j, len);
                    j = _88;  // Int = Int
                }
                int _97 = Int__PLUS_(i, 1);
                i = _97;  // Int = Int
                bool _37 = Int__LT_(i, lstrings);
                _100 = _37;
            }
        }
        String _103 = result;
        _104 = _103;
    }
    return _104;
}

Array__String String_lines(String* s) {
    Array _8 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(char) * 1) };
    ((char*)_8.data)[0] = '\n';
    Array__char* _9 = &_8; // ref
    Array__String _10 = String_split_MINUS_by(s, _9);
    Array_delete__char(_8);
    return _10;
}

bool String_lower_QMARK_(String* s) {
    static String _5 = "^[\\l\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_num_QMARK_(String* s) {
    static String _5 = "^[0-9]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_pad_MINUS_left(int len, char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        char* _26 = &pad; // ref
        Array__char _27 = Array_replicate__char(x, _26);
        Array__char* _28 = &_27; // ref
        String _29 = String_from_MINUS_chars(_28);
        String* _30 = &_29; // ref
        String _32 = String_append(_30, s);
        _33 = _32;
        Array_delete__char(_27);
        String_delete(_29);
    }
    return _33;
}

String String_pad_MINUS_right(int len, char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        char* _27 = &pad; // ref
        Array__char _28 = Array_replicate__char(x, _27);
        Array__char* _29 = &_28; // ref
        String _30 = String_from_MINUS_chars(_29);
        String* _31 = &_30; // ref
        String _32 = String_append(s, _31);
        _33 = _32;
        Array_delete__char(_28);
        String_delete(_30);
    }
    return _33;
}

String String_prefix_MINUS_string(String* s, int a) {
    Array__char _11 = String_chars(s);
    Array__char* _12 = &_11; // ref
    Array__char _15 = Array_subarray__char(_12, 0, a);
    Array__char* _16 = &_15; // ref
    String _17 = String_from_MINUS_chars(_16);
    Array_delete__char(_11);
    Array_delete__char(_15);
    return _17;
}

String String_random_MINUS_sized(int n) {
    Lambda _9 = { .callback = Char_random, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Char.random (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__char _11 = Array_repeat__char(n, _10);
    Array__char* _12 = &_11; // ref
    String _13 = String_from_MINUS_chars(_12);
    Array_delete__char(_11);
    return _13;
}

String String_repeat(int n, String* inpt) {
    String _43;
    /* let */ {
        static String _8 = "";
        String *_8_ref = &_8;
        String _9 = String_copy(_8_ref);
        String str = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                String* _27 = &str; // ref
                String _29 = String_append(_27, inpt);
                String_delete(str);
                str = _29;  // String = String
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        String _42 = str;
        _43 = _42;
    }
    return _43;
}

String String_reverse(String* s) {
    Array__char _9 = String_chars(s);
    Array__char _10 = Array_reverse__char(_9);
    Array__char* _11 = &_10; // ref
    String _12 = String_from_MINUS_chars(_11);
    Array_delete__char(_10);
    return _12;
}

Array__String String_split_MINUS_by(String* s, Array__char* separators) {
    Array__String _153;
    /* let */ {
        Pattern _9 = Pattern_from_MINUS_chars(separators);
        Pattern pat = _9;
        Pattern* _14 = &pat; // ref
        Array__int _16 = Pattern_find_MINUS_all(_14, s);
        Array__int idx = _16;
        Array__int* _21 = &idx; // ref
        int _22 = Array_length__int(_21);
        int lidx = _22;
        int _27 = Int_inc(lidx);
        Array__String _28 = Array_allocate__String(_27);
        Array__String result = _28;
        Array__String* _34 = &result; // ref
        int _59;
        bool _43 = Int__GT_(lidx, 0);
        if (_43) {
            Array__int* _49 = &idx; // ref
            int* _51 = Array_nth__int(_49, 0);
            int _52 = Int_copy(_51);
            int _53 = _52;
            _59 = _53;
        } else {
            int _57 = String_length(s);
            int _58 = _57;
            _59 = _58;
        }
        String _60 = String_substring(s, 0, _59);
        Array_aset_MINUS_uninitialized_BANG___String(_34, 0, _60);
        /* let */ {
            int i = 0;
            Array__int* _73 = &idx; // ref
            int _74 = Array_length__int(_73);
            int _75 = Int_dec(_74);
            bool _76 = Int__LT_(i, _75);
            bool _117 = _76;
            while (_117) {
                Array__String* _81 = &result; // ref
                int _84 = Int_inc(i);
                Array__int* _92 = &idx; // ref
                int* _94 = Array_nth__int(_92, i);
                int _95 = Int_copy(_94);
                int _96 = Int_inc(_95);
                Array__int* _101 = &idx; // ref
                int _104 = Int_inc(i);
                int* _105 = Array_nth__int(_101, _104);
                int _106 = Int_copy(_105);
                String _107 = String_substring(s, _96, _106);
                Array_aset_MINUS_uninitialized_BANG___String(_81, _84, _107);
                int _114 = Int__PLUS_(i, 1);
                i = _114;  // Int = Int
                Array__int* _73 = &idx; // ref
                int _74 = Array_length__int(_73);
                int _75 = Int_dec(_74);
                bool _76 = Int__LT_(i, _75);
                _117 = _76;
            }
        }
        bool _123 = Int__GT_(lidx, 0);
        if (_123) {
            Array__String* _128 = &result; // ref
            Array__int* _137 = &idx; // ref
            int _140 = Int_dec(lidx);
            int* _141 = Array_nth__int(_137, _140);
            int _142 = Int_copy(_141);
            int _143 = Int_inc(_142);
            String _144 = String_suffix_MINUS_string(s, _143);
            Array_aset_MINUS_uninitialized_BANG___String(_128, lidx, _144);
        } else {
            /* () */
        }
        Array__String _152 = result;
        _153 = _152;
        Array_delete__int(idx);
        Pattern_delete(pat);
    }
    return _153;
}

bool String_starts_MINUS_with_QMARK_(String* s, String* sub) {
    int _12 = String_length(sub);
    String _13 = String_prefix_MINUS_string(s, _12);
    String* _14 = &_13; // ref
    bool _15 = String__EQ_(sub, _14);
    String_delete(_13);
    return _15;
}

String String_substring(String* s, int a, int b) {
    Array__char _12 = String_chars(s);
    Array__char* _13 = &_12; // ref
    Array__char _16 = Array_subarray__char(_13, a, b);
    Array__char* _17 = &_16; // ref
    String _18 = String_from_MINUS_chars(_17);
    Array_delete__char(_12);
    Array_delete__char(_16);
    return _18;
}

String String_suffix_MINUS_string(String* s, int b) {
    Array__char _11 = String_chars(s);
    Array__char* _12 = &_11; // ref
    int _16 = String_length(s);
    Array__char _17 = Array_subarray__char(_12, b, _16);
    Array__char* _18 = &_17; // ref
    String _19 = String_from_MINUS_chars(_18);
    Array_delete__char(_11);
    Array_delete__char(_17);
    return _19;
}

int String_sum_MINUS_length(Array__String* strings) {
    int _47;
    /* let */ {
        int sum = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        /* let */ {
            int i = 0;
            bool _21 = Int__LT_(i, lstrings);
            bool _43 = _21;
            while (_43) {
                String* _31 = Array_nth__String(strings, i);
                int _32 = String_length(_31);
                int _33 = Int__PLUS_(sum, _32);
                sum = _33;  // Int = Int
                int _40 = Int__PLUS_(i, 1);
                i = _40;  // Int = Int
                bool _21 = Int__LT_(i, lstrings);
                _43 = _21;
            }
        }
        int _46 = sum;
        _47 = _46;
    }
    return _47;
}

String String_trim(String* s) {
    String _8 = String_trim_MINUS_right(s);
    String* _9 = &_8; // ref
    String _10 = String_trim_MINUS_left(_9);
    String_delete(_8);
    return _10;
}

String String_trim_MINUS_left(String* s) {
    static String _5 = "^\\s+";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_trim_MINUS_right(String* s) {
    static String _5 = "\\s+$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

bool String_upper_QMARK_(String* s) {
    static String _5 = "^[\\u\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

Array__String String_words(String* s) {
    Array _9 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(char) * 2) };
    ((char*)_9.data)[0] = '\t';
    ((char*)_9.data)[1] = ' ';
    Array__char* _10 = &_9; // ref
    Array__String _11 = String_split_MINUS_by(s, _10);
    Array_delete__char(_9);
    return _11;
}

String String_zero() {
    static String _4 = "";
    String *_4_ref = &_4;
    String _5 = String_copy(_4_ref);
    return _5;
}

bool StringCopy__DIV__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__DIV__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__LT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__LT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__GT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__GT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

String StringCopy_prn(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_prn(_10);
    String_delete(_9);
    return _11;
}

String StringCopy_str(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_str(_10);
    String_delete(_9);
    return _11;
}

SDL_Texture* System_exit__SDL_Texture_MUL_ (int code) {
    exit(code);
}

void System_exit__void (int code) {
    exit(code);
}

bool Vector2__EQ_(Vector2__double* a, Vector2__double* b) {
    bool _35;
    double* _10 = Vector2_x__double(a);
    double _11 = Double_copy(_10);
    double* _15 = Vector2_x__double(b);
    double _16 = Double_copy(_15);
    bool _17 = Double__EQ_(_11, _16);
    if (_17) {
        double* _23 = Vector2_y__double(a);
        double _24 = Double_copy(_23);
        double* _28 = Vector2_y__double(b);
        double _29 = Double_copy(_28);
        bool _30 = Double__EQ_(_24, _29);
        bool _31 = _30;
        _35 = _31;
    } else {
        bool _34 = false;
        _35 = _34;
    }
    return _35;
}

double Vector2_angle_MINUS_between(Vector2__double* a, Vector2__double* b) {
    double _29;
    /* let */ {
        double _11 = Vector2_dot__double(a, b);
        double _15 = Vector2_mag(a);
        double _18 = Vector2_mag(b);
        double _19 = Double__MUL_(_15, _18);
        double _20 = Double__DIV_(_11, _19);
        double dmm = _20;
        double _27 = Double_clamp__double(-1.0, 1.0, dmm);
        double _28 = Double_acos(_27);
        _29 = _28;
    }
    return _29;
}

bool Vector2_anti_MINUS_parallel_QMARK_(Vector2__double* a, Vector2__double* b) {
    double _9 = Vector2_angle_MINUS_between(a, b);
    bool _11 = Double__EQ_(_9, Double_pi);
    return _11;
}

bool Vector2_approx(Vector2__double* a, Vector2__double* b) {
    bool _35;
    double* _10 = Vector2_x__double(a);
    double _11 = Double_copy(_10);
    double* _15 = Vector2_x__double(b);
    double _16 = Double_copy(_15);
    bool _17 = Double_approx(_11, _16);
    if (_17) {
        double* _23 = Vector2_y__double(a);
        double _24 = Double_copy(_23);
        double* _28 = Vector2_y__double(b);
        double _29 = Double_copy(_28);
        bool _30 = Double_approx(_24, _29);
        bool _31 = _30;
        _35 = _31;
    } else {
        bool _34 = false;
        _35 = _34;
    }
    return _35;
}

Vector2__double Vector2_copy__double(Vector2__double* pRef) {
    Vector2__double copy = *pRef;
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    return copy;
}

void Vector2_delete__double(Vector2__double p) {
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
}

double Vector2_dist(Vector2__double* a, Vector2__double* b) {
    double _17;
    /* let */ {
        Vector2__double _10 = Vector2_sub__double(b, a);
        Vector2__double s = _10;
        Vector2__double* _15 = &s; // ref
        double _16 = Vector2_mag(_15);
        _17 = _16;
        Vector2_delete__double(s);
    }
    return _17;
}

Vector2__double Vector2_div__double(Vector2__double* a, double n) {
    double* _10 = Vector2_x__double(a);
    double _11 = Double_copy(_10);
    double _13 = Double__DIV_(_11, n);
    double* _18 = Vector2_y__double(a);
    double _19 = Double_copy(_18);
    double _21 = Double__DIV_(_19, n);
    Vector2__double _22 = Vector2_init__double(_13, _21);
    return _22;
}

double Vector2_dot__double(Vector2__double* a, Vector2__double* b) {
    double* _10 = Vector2_x__double(a);
    double _11 = Double_copy(_10);
    double* _15 = Vector2_x__double(b);
    double _16 = Double_copy(_15);
    double _17 = Double__MUL_(_11, _16);
    double* _22 = Vector2_y__double(a);
    double _23 = Double_copy(_22);
    double* _27 = Vector2_y__double(b);
    double _28 = Double_copy(_27);
    double _29 = Double__MUL_(_23, _28);
    double _30 = Double__PLUS_(_17, _29);
    return _30;
}

double Vector2_heading(Vector2__double* a) {
    double* _8 = Vector2_y__double(a);
    double _9 = Double_copy(_8);
    double* _13 = Vector2_x__double(a);
    double _14 = Double_copy(_13);
    double _15 = Double_atan2(_9, _14);
    return _15;
}

Vector2__double Vector2_init__double(double x, double y) {
    Vector2__double instance;
    instance.x = x;
    instance.y = y;
    return instance;
}

double Vector2_mag(Vector2__double* o) {
    double _7 = Vector2_mag_MINUS_sq__double(o);
    double _8 = Double_sqrt(_7);
    return _8;
}

double Vector2_mag_MINUS_sq__double(Vector2__double* o) {
    double _28;
    /* let */ {
        double* _9 = Vector2_x__double(o);
        double _10 = Double_copy(_9);
        double x = _10;
        double* _15 = Vector2_y__double(o);
        double _16 = Double_copy(_15);
        double y = _16;
        double _22 = Double__MUL_(x, x);
        double _26 = Double__MUL_(y, y);
        double _27 = Double__PLUS_(_22, _26);
        _28 = _27;
    }
    return _28;
}

Vector2__double Vector2_normalize(Vector2__double* o) {
    Vector2__double _27;
    /* let */ {
        double _8 = Vector2_mag(o);
        double m = _8;
        Vector2__double _26;
        bool _14 = Double__EQ_(m, 0.0);
        if (_14) {
            Vector2__double _18 = Vector2_copy__double(o);
            Vector2__double _19 = _18;
            _26 = _19;
        } else {
            Vector2__double _24 = Vector2_div__double(o, m);
            Vector2__double _25 = _24;
            _26 = _25;
        }
        _27 = _26;
    }
    return _27;
}

bool Vector2_parallel_QMARK_(Vector2__double* a, Vector2__double* b) {
    double _9 = Vector2_angle_MINUS_between(a, b);
    bool _11 = Double__EQ_(_9, 0.0);
    return _11;
}

bool Vector2_perpendicular_QMARK_(Vector2__double* a, Vector2__double* b) {
    double _9 = Vector2_angle_MINUS_between(a, b);
    double _13 = Double__DIV_(Double_pi, 2.0);
    bool _14 = Double__EQ_(_9, _13);
    return _14;
}

Vector2__double Vector2_random() {
    double _7 = Double_random_MINUS_between(0.0, 1.0);
    double _11 = Double_random_MINUS_between(0.0, 1.0);
    Vector2__double _12 = Vector2_init__double(_7, _11);
    return _12;
}

Vector2__double Vector2_rotate(Vector2__double* a, double n) {
    Vector2__double _32;
    /* let */ {
        double _10 = Vector2_heading(a);
        double _12 = Double__PLUS_(_10, n);
        double h = _12;
        double _16 = Vector2_mag(a);
        double m = _16;
        double _22 = Double_cos(h);
        double _24 = Double__MUL_(_22, m);
        double _28 = Double_sin(h);
        double _30 = Double__MUL_(_28, m);
        Vector2__double _31 = Vector2_init__double(_24, _30);
        _32 = _31;
    }
    return _32;
}

Vector2__double Vector2_sub__double(Vector2__double* a, Vector2__double* b) {
    double* _10 = Vector2_x__double(a);
    double _11 = Double_copy(_10);
    double* _15 = Vector2_x__double(b);
    double _16 = Double_copy(_15);
    double _17 = Double__MINUS_(_11, _16);
    double* _22 = Vector2_y__double(a);
    double _23 = Double_copy(_22);
    double* _27 = Vector2_y__double(b);
    double _28 = Double_copy(_27);
    double _29 = Double__MINUS_(_23, _28);
    Vector2__double _30 = Vector2_init__double(_17, _29);
    return _30;
}

double* Vector2_x__double(Vector2__double* p) { return (&(p->x)); }

double* Vector2_y__double(Vector2__double* p) { return (&(p->y)); }

Vector2__double Vector2_zero() {
    Vector2__double _6 = Vector2_init__double(0.0, 0.0);
    return _6;
}

bool Vector3__EQ_(Vector3__double* a, Vector3__double* b) {
    bool _54;
    double* _10 = Vector3_x__double(a);
    double _11 = Double_copy(_10);
    double* _15 = Vector3_x__double(b);
    double _16 = Double_copy(_15);
    bool _17 = Double__EQ_(_11, _16);
    if (_17) {
        bool _49;
        double* _24 = Vector3_y__double(a);
        double _25 = Double_copy(_24);
        double* _29 = Vector3_y__double(b);
        double _30 = Double_copy(_29);
        bool _31 = Double__EQ_(_25, _30);
        if (_31) {
            double* _37 = Vector3_z__double(a);
            double _38 = Double_copy(_37);
            double* _42 = Vector3_z__double(b);
            double _43 = Double_copy(_42);
            bool _44 = Double__EQ_(_38, _43);
            bool _45 = _44;
            _49 = _45;
        } else {
            bool _48 = false;
            _49 = _48;
        }
        bool _50 = _49;
        _54 = _50;
    } else {
        bool _53 = false;
        _54 = _53;
    }
    return _54;
}

double Vector3_angle_MINUS_between(Vector3__double* a, Vector3__double* b) {
    double _29;
    /* let */ {
        double _11 = Vector3_dot__double(a, b);
        double _15 = Vector3_mag(a);
        double _18 = Vector3_mag(b);
        double _19 = Double__MUL_(_15, _18);
        double _20 = Double__DIV_(_11, _19);
        double dmm = _20;
        double _27 = Double_clamp__double(-1.0, 1.0, dmm);
        double _28 = Double_acos(_27);
        _29 = _28;
    }
    return _29;
}

bool Vector3_anti_MINUS_parallel_QMARK_(Vector3__double* a, Vector3__double* b) {
    double _9 = Vector3_angle_MINUS_between(a, b);
    bool _11 = Double__EQ_(_9, Double_pi);
    return _11;
}

Vector3__double Vector3_copy__double(Vector3__double* pRef) {
    Vector3__double copy = *pRef;
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    /* Ignore non-managed member 'z' : Double */
    return copy;
}

void Vector3_delete__double(Vector3__double p) {
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    /* Ignore non-managed member 'z' : Double */
}

Vector3__double Vector3_div__double(Vector3__double* a, double n) {
    double* _10 = Vector3_x__double(a);
    double _11 = Double_copy(_10);
    double _13 = Double__DIV_(_11, n);
    double* _18 = Vector3_y__double(a);
    double _19 = Double_copy(_18);
    double _21 = Double__DIV_(_19, n);
    double* _26 = Vector3_z__double(a);
    double _27 = Double_copy(_26);
    double _29 = Double__DIV_(_27, n);
    Vector3__double _30 = Vector3_init__double(_13, _21, _29);
    return _30;
}

double Vector3_dot__double(Vector3__double* a, Vector3__double* b) {
    double* _10 = Vector3_x__double(a);
    double _11 = Double_copy(_10);
    double* _15 = Vector3_x__double(b);
    double _16 = Double_copy(_15);
    double _17 = Double__MUL_(_11, _16);
    double* _23 = Vector3_y__double(a);
    double _24 = Double_copy(_23);
    double* _28 = Vector3_y__double(b);
    double _29 = Double_copy(_28);
    double _30 = Double__MUL_(_24, _29);
    double* _35 = Vector3_z__double(a);
    double _36 = Double_copy(_35);
    double* _40 = Vector3_z__double(b);
    double _41 = Double_copy(_40);
    double _42 = Double__MUL_(_36, _41);
    double _43 = Double__PLUS_(_30, _42);
    double _44 = Double__PLUS_(_17, _43);
    return _44;
}

Vector3__double Vector3_init__double(double x, double y, double z) {
    Vector3__double instance;
    instance.x = x;
    instance.y = y;
    instance.z = z;
    return instance;
}

double Vector3_mag(Vector3__double* o) {
    double _7 = Vector3_mag_MINUS_sq__double(o);
    double _8 = Double_sqrt(_7);
    return _8;
}

double Vector3_mag_MINUS_sq__double(Vector3__double* o) {
    double _40;
    /* let */ {
        double* _9 = Vector3_x__double(o);
        double _10 = Double_copy(_9);
        double x = _10;
        double* _15 = Vector3_y__double(o);
        double _16 = Double_copy(_15);
        double y = _16;
        double* _21 = Vector3_z__double(o);
        double _22 = Double_copy(_21);
        double z = _22;
        double _28 = Double__MUL_(x, x);
        double _33 = Double__MUL_(y, y);
        double _37 = Double__MUL_(z, z);
        double _38 = Double__PLUS_(_33, _37);
        double _39 = Double__PLUS_(_28, _38);
        _40 = _39;
    }
    return _40;
}

Vector3__double Vector3_normalize(Vector3__double* o) {
    Vector3__double _27;
    /* let */ {
        double _8 = Vector3_mag(o);
        double m = _8;
        Vector3__double _26;
        bool _14 = Double__EQ_(m, 0.0);
        if (_14) {
            Vector3__double _18 = Vector3_copy__double(o);
            Vector3__double _19 = _18;
            _26 = _19;
        } else {
            Vector3__double _24 = Vector3_div__double(o, m);
            Vector3__double _25 = _24;
            _26 = _25;
        }
        _27 = _26;
    }
    return _27;
}

bool Vector3_parallel_QMARK_(Vector3__double* a, Vector3__double* b) {
    double _9 = Vector3_angle_MINUS_between(a, b);
    bool _11 = Double__EQ_(_9, 0.0);
    return _11;
}

bool Vector3_perpendicular_QMARK_(Vector3__double* a, Vector3__double* b) {
    double _9 = Vector3_angle_MINUS_between(a, b);
    double _13 = Double__DIV_(Double_pi, 2.0);
    bool _14 = Double__EQ_(_9, _13);
    return _14;
}

Vector3__double Vector3_random() {
    double _7 = Double_random_MINUS_between(0.0, 1.0);
    double _11 = Double_random_MINUS_between(0.0, 1.0);
    double _15 = Double_random_MINUS_between(0.0, 1.0);
    Vector3__double _16 = Vector3_init__double(_7, _11, _15);
    return _16;
}

double* Vector3_x__double(Vector3__double* p) { return (&(p->x)); }

double* Vector3_y__double(Vector3__double* p) { return (&(p->y)); }

double* Vector3_z__double(Vector3__double* p) { return (&(p->z)); }

Vector3__double Vector3_zero() {
    Vector3__double _7 = Vector3_init__double(0.0, 0.0, 0.0);
    return _7;
}

double VectorN__Lambda__Lambda_dot_35_26(double x, double* y) {
    double _24 = Double_copy(y);
    double _25 = Double__PLUS_(x, _24);
    return _25;
}

double VectorN__Lambda_angle_MINUS_between_35(VectorN__Lambda_angle_MINUS_between_35_env* _env, double x) {
    double _34;
    /* let */ {
        double _20 = VectorN_mag(_env->a);
        double _23 = VectorN_mag(_env->b);
        double _24 = Double__MUL_(_20, _23);
        double _25 = Double__DIV_(x, _24);
        double dmm = _25;
        double _32 = Double_clamp__double(-1.0, 1.0, dmm);
        double _33 = Double_acos(_32);
        _34 = _33;
    }
    return _34;
}

bool VectorN__Lambda_anti_MINUS_parallel_QMARK__17(double x) {
    bool _16 = Double__EQ_(x, Double_pi);
    return _16;
}

double VectorN__Lambda_dist_18(VectorN__double s) {
    VectorN__double* _16 = &s; // ref
    double _17 = VectorN_mag(_16);
    VectorN_delete__double(s);
    return _17;
}

double VectorN__Lambda_dot_26(double x, double* y) {
    double _24 = Double_copy(y);
    double _25 = Double__PLUS_(x, _24);
    return _25;
}

double VectorN__Lambda_dot_35(VectorN__double x) {
    // This lambda captures 0 variables: 
    Lambda _26 = {
      .callback = VectorN__Lambda__Lambda_dot_35_26,
      .env = NULL,
      .delete = NULL,
      .copy = NULL
    };
    Lambda* _27 = &_26; // ref
    VectorN__double* _32 = &x; // ref
    Array__double* _33 = VectorN_v__double(_32);
    double _34 = Array_reduce__double_double(_27, 0.0, _33);
    Function_delete__double_double_MUL__double(_26);
    VectorN_delete__double(x);
    return _34;
}

double VectorN__Lambda_mag_MINUS_sq_16(double x, double* y) {
    double _14 = Double_copy(y);
    double _15 = Double__PLUS_(x, _14);
    return _15;
}

double VectorN__Lambda_mag_MINUS_sq_33(double* x) {
    double _28 = Double_copy(x);
    double _31 = Double_copy(x);
    double _32 = Double__MUL_(_28, _31);
    return _32;
}

bool VectorN__Lambda_parallel_QMARK__17(double x) {
    bool _16 = Double__EQ_(x, 0.0);
    return _16;
}

bool VectorN__Lambda_perpendicular_QMARK__20(double x) {
    double _18 = Double__DIV_(Double_pi, 2.0);
    bool _19 = Double__EQ_(x, _18);
    return _19;
}

Maybe__double VectorN_angle_MINUS_between(VectorN__double* a, VectorN__double* b) {
    Maybe__double _9 = VectorN_dot(a, b);
    // This lambda captures 2 variables: a, b
    VectorN__Lambda_angle_MINUS_between_35_env *_35_env = CARP_MALLOC(sizeof(VectorN__Lambda_angle_MINUS_between_35_env));
    _35_env->a = a;
    _35_env->b = b;
    Lambda _35 = {
      .callback = VectorN__Lambda_angle_MINUS_between_35,
      .env = _35_env,
      .delete = VectorN__Lambda_angle_MINUS_between_35_env_delete,
      .copy = VectorN__Lambda_angle_MINUS_between_35_env_copy
    };
    Maybe__double _36 = Maybe_apply__double_double(_9, _35);
    return _36;
}

Maybe__bool VectorN_anti_MINUS_parallel_QMARK_(VectorN__double* a, VectorN__double* b) {
    Maybe__double _9 = VectorN_angle_MINUS_between(a, b);
    // This lambda captures 0 variables: 
    Lambda _17 = {
      .callback = VectorN__Lambda_anti_MINUS_parallel_QMARK__17,
      .env = NULL,
      .delete = NULL,
      .copy = NULL
    };
    Maybe__bool _18 = Maybe_apply__double_bool(_9, _17);
    return _18;
}

VectorN__double VectorN_copy__double(VectorN__double* pRef) {
    VectorN__double copy = *pRef;
    /* Ignore non-managed member 'n' : Int */
    copy.v = Array_copy__double(&(pRef->v));
    return copy;
}

void VectorN_delete__double(VectorN__double p) {
    /* Ignore non-managed member 'n' : Int */
    Array_delete__double(p.v);
}

Maybe__double VectorN_dist(VectorN__double* a, VectorN__double* b) {
    Maybe__VectorN__double _9 = VectorN_sub__double(b, a);
    // This lambda captures 0 variables: 
    Lambda _18 = {
      .callback = VectorN__Lambda_dist_18,
      .env = NULL,
      .delete = NULL,
      .copy = NULL
    };
    Maybe__double _19 = Maybe_apply__VectorN__double_double(_9, _18);
    return _19;
}

VectorN__double VectorN_div__double(VectorN__double* a, double n) {
    Lambda _6 = { .callback = Double__DIV_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Double./ (LookupGlobal CarpLand AFunction)
    Array__double* _9 = VectorN_v__double(a);
    int* _15 = VectorN_n__double(a);
    int _16 = Int_copy(_15);
    double* _19 = &n; // ref
    Array__double _20 = Array_replicate__double(_16, _19);
    Array__double* _21 = &_20; // ref
    VectorN__double _22 = VectorN_zip_MINUS___double_double_double(_6, _9, _21);
    Array_delete__double(_20);
    return _22;
}

Maybe__double VectorN_dot(VectorN__double* x, VectorN__double* y) {
    Lambda _7 = { .callback = Double__MUL_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Double.* (LookupGlobal CarpLand AFunction)
    Maybe__VectorN__double _10 = VectorN_zip__double_double_double(_7, x, y);
    // This lambda captures 0 variables: 
    Lambda _35 = {
      .callback = VectorN__Lambda_dot_35,
      .env = NULL,
      .delete = NULL,
      .copy = NULL
    };
    Maybe__double _36 = Maybe_apply__VectorN__double_double(_10, _35);
    return _36;
}

VectorN__double VectorN_init__double(int n, Array__double v) {
    VectorN__double instance;
    instance.n = n;
    instance.v = v;
    return instance;
}

double VectorN_mag(VectorN__double* o) {
    double _7 = VectorN_mag_MINUS_sq(o);
    double _8 = Double_sqrt(_7);
    return _8;
}

double VectorN_mag_MINUS_sq(VectorN__double* o) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = VectorN__Lambda_mag_MINUS_sq_16,
      .env = NULL,
      .delete = NULL,
      .copy = NULL
    };
    Lambda* _17 = &_16; // ref
    // This lambda captures 0 variables: 
    Lambda _33 = {
      .callback = VectorN__Lambda_mag_MINUS_sq_33,
      .env = NULL,
      .delete = NULL,
      .copy = NULL
    };
    Lambda* _34 = &_33; // ref
    Array__double* _37 = VectorN_v__double(o);
    Array__double _38 = Array_copy_MINUS_map__double_double(_34, _37);
    Array__double* _39 = &_38; // ref
    double _40 = Array_reduce__double_double(_17, 0.0, _39);
    Array_delete__double(_38);
    Function_delete__double_MUL__double(_33);
    Function_delete__double_double_MUL__double(_16);
    return _40;
}

int* VectorN_n__double(VectorN__double* p) { return (&(p->n)); }

VectorN__double VectorN_normalize(VectorN__double* o) {
    VectorN__double _27;
    /* let */ {
        double _8 = VectorN_mag(o);
        double m = _8;
        VectorN__double _26;
        bool _14 = Double__EQ_(m, 0.0);
        if (_14) {
            VectorN__double _18 = VectorN_copy__double(o);
            VectorN__double _19 = _18;
            _26 = _19;
        } else {
            VectorN__double _24 = VectorN_div__double(o, m);
            VectorN__double _25 = _24;
            _26 = _25;
        }
        _27 = _26;
    }
    return _27;
}

Maybe__bool VectorN_parallel_QMARK_(VectorN__double* a, VectorN__double* b) {
    Maybe__double _9 = VectorN_angle_MINUS_between(a, b);
    // This lambda captures 0 variables: 
    Lambda _17 = {
      .callback = VectorN__Lambda_parallel_QMARK__17,
      .env = NULL,
      .delete = NULL,
      .copy = NULL
    };
    Maybe__bool _18 = Maybe_apply__double_bool(_9, _17);
    return _18;
}

Maybe__bool VectorN_perpendicular_QMARK_(VectorN__double* a, VectorN__double* b) {
    Maybe__double _9 = VectorN_angle_MINUS_between(a, b);
    // This lambda captures 0 variables: 
    Lambda _20 = {
      .callback = VectorN__Lambda_perpendicular_QMARK__20,
      .env = NULL,
      .delete = NULL,
      .copy = NULL
    };
    Maybe__bool _21 = Maybe_apply__double_bool(_9, _20);
    return _21;
}

VectorN__double VectorN_random_MINUS_sized(int n) {
    Lambda _9 = { .callback = VectorN_unit_MINUS_random, .env = NULL, .delete = NULL, .copy = NULL }; //Sym VectorN.unit-random (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__double _11 = Array_repeat__double(n, _10);
    VectorN__double _12 = VectorN_init__double(n, _11);
    return _12;
}

Maybe__VectorN__double VectorN_sub__double(VectorN__double* a, VectorN__double* b) {
    Lambda _6 = { .callback = Double__MINUS_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Double.- (LookupGlobal CarpLand AFunction)
    Maybe__VectorN__double _9 = VectorN_zip__double_double_double(_6, a, b);
    return _9;
}

double VectorN_unit_MINUS_random() {
    double _6 = Double_random_MINUS_between(0.0, 1.0);
    return _6;
}

Array__double* VectorN_v__double(VectorN__double* p) { return (&(p->v)); }

VectorN__double VectorN_zero_MINUS_sized(int n) {
    VectorN__double _17;
    /* let */ {
        double z = 0.0;
        double* _14 = &z; // ref
        Array__double _15 = Array_replicate__double(n, _14);
        VectorN__double _16 = VectorN_init__double(n, _15);
        _17 = _16;
    }
    return _17;
}

VectorN__double VectorN_zip_MINUS___double_double_double(Lambda f, Array__double* a, Array__double* b) {
    VectorN__double _64;
    /* let */ {
        int _11 = Array_length__double(a);
        Array__double _12 = Array_allocate__double(_11);
        Array__double total = _12;
        /* let */ {
            int i = 0;
            int _24 = Array_length__double(a);
            bool _25 = Int__LT_(i, _24);
            bool _55 = _25;
            while (_55) {
                Array__double* _30 = &total; // ref
                double* _37 = Array_nth__double(a, i);
                double _38 = Double_copy(_37);
                double* _43 = Array_nth__double(b, i);
                double _44 = Double_copy(_43);
                double _45 = f.env ? ((double(*)(LambdaEnv, double, double))f.callback)(f.env, _38, _44) : ((double(*)(double, double))f.callback)(_38, _44);
                Array_aset_MINUS_uninitialized_BANG___double(_30, i, _45);
                int _52 = Int__PLUS_(i, 1);
                i = _52;  // Int = Int
                int _24 = Array_length__double(a);
                bool _25 = Int__LT_(i, _24);
                _55 = _25;
            }
        }
        int _60 = Array_length__double(a);
        VectorN__double _62 = VectorN_init__double(_60, total);
        VectorN__double _63 = _62;
        _64 = _63;
    }
    Function_delete__double_double_double(f);
    return _64;
}

Maybe__VectorN__double VectorN_zip__double_double_double(Lambda f, VectorN__double* a, VectorN__double* b) {
    Maybe__VectorN__double _36;
    int* _11 = VectorN_n__double(a);
    int _12 = Int_copy(_11);
    int* _16 = VectorN_n__double(b);
    int _17 = Int_copy(_16);
    bool _18 = Int__EQ_(_12, _17);
    if (_18) {
        Array__double* _25 = VectorN_v__double(a);
        Array__double* _28 = VectorN_v__double(b);
        VectorN__double _29 = VectorN_zip_MINUS___double_double_double(f, _25, _28);
        Maybe__VectorN__double _30 = Maybe_Just__VectorN__double(_29);
        Maybe__VectorN__double _31 = _30;
        _36 = _31;
    } else {
        Maybe__VectorN__double _34 = Maybe_Nothing__VectorN__double();
        Maybe__VectorN__double _35 = _34;
        Function_delete__double_double_double(f);
        _36 = _35;
    }
    return _36;
}

VectorN__Lambda_angle_MINUS_between_35_env VectorN__Lambda_angle_MINUS_between_35_env_copy(VectorN__Lambda_angle_MINUS_between_35_env* pRef) {
    VectorN__Lambda_angle_MINUS_between_35_env copy = *pRef;
    /* Ignore non-managed member 'a' : (Ref (VectorN Double)) */
    /* Ignore non-managed member 'b' : (Ref (VectorN Double)) */
    return copy;
}

void VectorN__Lambda_angle_MINUS_between_35_env_delete(VectorN__Lambda_angle_MINUS_between_35_env* p) {
    /* Ignore non-managed member 'a' : (Ref (VectorN Double)) */
    /* Ignore non-managed member 'b' : (Ref (VectorN Double)) */
}

void draw__SDLApp_MUL_(SDLApp* app, SDL_Renderer* rend, int* state) {
    SDL_Color _14 = SDL_rgb(200, 220, 200);
    SDL_Color* _15 = &_14; // ref
    SDL_bg(rend, _15);
    /* let */ {
        int w = 500;
        int h = 500;
        Art* _29 = &art; // ref
        SDL_Texture** _30 = Art_player(_29);
        SDL_Texture* _31 = Pointer_copy__SDL_Texture(_30);
        SDL_Rect _38 = SDL_rect(0, 0, 64, 64);
        int _45 = Int__DIV_(w, 2);
        int _49 = Int__DIV_(h, 2);
        SDL_Rect _52 = SDL_rect(_45, _49, 64, 64);
        int _57 = Int_copy(state);
        double _58 = Double_from_MINUS_int(_57);
        SDL_Point _63 = SDL_point(32, 32);
        SDL_RenderCopyEx(rend, _31, &_38, &_52, _58, &_63, SDL_FLIP_NONE);
    }
}

int enum_MINUS_to_MINUS_int__SDL_Keycode (SDL_Keycode e) {
    return (int)e;
}

SDL_Texture* load_MINUS_img__String_String_MUL_(SDL_Renderer* rend, String img_MINUS_dir, String* name) {
    SDL_Texture* _37;
    /* let */ {
        String _15 = StringCopy_str(img_MINUS_dir);
        String _18 = String_str(name);
        String _19 = StringCopy_append(_15, _18);
        String* _20 = &_19; // ref
        char* _21 = String_cstr(_20);
        SDL_Texture* _22 = IMG_LoadTexture(rend, _21);
        SDL_Texture* p = _22;
        SDL_Texture* _36;
        bool _27 = null_QMARK___SDL_Texture(p);
        if (_27) {
            SDL_Texture* _31 = System_exit__SDL_Texture_MUL_(1);
            SDL_Texture* _32 = _31;
            _36 = _32;
        } else {
            SDL_Texture* _35 = p;
            _36 = _35;
        }
        _37 = _36;
        String_delete(_19);
    }
    return _37;
}

int main(int argc, char** argv) {
    carp_init_globals(argc, argv);
    /* let */ {
        static String _6 = "MOSH PIT";
        String *_6_ref = &_6;
        SDLApp _9 = SDLApp_create(_6_ref, 500, 500);
        SDLApp app = _9;
        SDLApp* _15 = &app; // ref
        SDL_Renderer** _16 = SDLApp_renderer(_15);
        SDL_Renderer* _17 = Pointer_copy__SDL_Renderer(_16);
        SDL_Renderer* rend = _17;
        String* _25 = System_get_MINUS_arg(0);
        String _26 = Filepath_dir_MINUS_from_MINUS_path(_25);
        String* _27 = &_26; // ref
        String _28 = String_str(_27);
        static String _30 = "/img/";
        String *_30_ref = &_30;
        String _31 = String_str(_30_ref);
        String _32 = StringCopy_append(_28, _31);
        String img_MINUS_dir = _32;
        int state = 0;
        static String _43 = "Soldier.png";
        String *_43_ref = &_43;
        SDL_Texture* _44 = load_MINUS_img__String_String_MUL_(rend, img_MINUS_dir, _43_ref);
        Art _45 = Art_init(_44);
        Art_delete(art);
        art = _45;  // Art = Art
        SDLApp* _50 = &app; // ref
        Lambda _51 = { .callback = SDLApp_quit_MINUS_on_MINUS_esc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym SDLApp.quit-on-esc (LookupGlobal CarpLand AFunction)
        Lambda _52 = { .callback = tick, .env = NULL, .delete = NULL, .copy = NULL }; //Sym tick (LookupGlobal CarpLand AFunction)
        Lambda _53 = { .callback = draw__SDLApp_MUL_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym draw__SDLApp* (LookupGlobal CarpLand AFunction)
        SDLApp_run_MINUS_with_MINUS_callbacks__int(_50, _51, _52, _53, state);
        SDLApp_delete(app);
        String_delete(_26);
    }
}

int max__int(int a, int b) {
    int _16;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

int min__int(int a, int b) {
    int _16;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

bool null_QMARK___SDL_Texture(SDL_Texture* p) {
    SDL_Texture* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__SDL_Texture(NULL, _11);
    return _12;
}

bool pos_QMARK___int(int x) {
    int _6 = Int_zero();
    bool _8 = Int__LT_(_6, x);
    return _8;
}

int tick(int state) {
    int _7 = Int__PLUS_(state, 10);
    return _7;
}

