#pragma once

struct FLOAT3
{
	float x, y, z;
};

struct FLOAT2
{
	float x, y;
};

// Mesh header struct
struct MeshHeader
{
	int indexcount, vertexcount;
	int indexstart, vertexstart;
	char t_albedo[256];
	char t_normal[256];
	char t_metallic[256];
	char t_roughness[256];
	char t_ambient_occlusion[256];
	char t_emissive[256];
};

struct SimpleVertex
{
	FLOAT3 Pos;
	FLOAT3 Normal;
	FLOAT3 Tangent;
	FLOAT3 Bitangent;
	FLOAT2 Tex;
};

enum class BUTTONS {
	NUM_ZERO = 0X30,
	NUM_ONE = 0X31,
	NUM_TWO = 0X32,
	NUM_THREE = 0X33,
	NUM_FOUR = 0X34,
	NUM_FIVE = 0X35,
	NUM_SIX = 0X36,
	NUM_SEVEN = 0X37,
	NUM_EIGHT = 0X38,
	NUM_NINE = 0X39,

	LETTER_A = 0X41,
	LETTER_B = 0X42,
	LETTER_C = 0X43,
	LETTER_D = 0X44,
	LETTER_E = 0X45,
	LETTER_F = 0X46,
	LETTER_G = 0X47,
	LETTER_H = 0X48,
	LETTER_I = 0X49,
	LETTER_J = 0X4A,
	LETTER_K = 0X4B,
	LETTER_L = 0X4C,
	LETTER_M = 0X4D,
	LETTER_N = 0X4E,
	LETTER_O = 0X4F,
	LETTER_P = 0X50,
	LETTER_Q = 0X51,
	LETTER_R = 0X52,
	LETTER_S = 0X53,
	LETTER_T = 0X54,
	LETTER_U = 0X55,
	LETTER_V = 0X56,
	LETTER_W = 0X57,
	LETTER_X = 0X58,
	LETTER_Y = 0X59,
	LETTER_Z = 0X5A,
};

// mACROS
#define ASSERT_HRESULT_SUCCESS(_result) assert(!(FAILED((_result))))
#define D3DSAFE_RELEASE(ptr) if((ptr)) ptr->Release()
// mACROS