// ScriptStruct /Script/AudioExtensions.AudioParameter
// Size: 0x90
struct FAudioParameter
{
	struct FName ParamName; // 0x0 (0x4)
	float FloatParam; // 0x4 (0x4)
	bool BoolParam; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	int IntParam; // 0xc (0x4)
	class UObject* ObjectParam; // 0x10 (0x8)
	struct FString StringParam; // 0x18 (0x10)
	struct TArray<float> ArrayFloatParam; // 0x28 (0x10)
	struct TArray<bool> ArrayBoolParam; // 0x38 (0x10)
	struct TArray<int> ArrayIntParam; // 0x48 (0x10)
	struct TArray<class UObject*> ArrayObjectParam; // 0x58 (0x10)
	struct TArray<struct FString> ArrayStringParam; // 0x68 (0x10)
	enum EAudioParameterType ParamType; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	struct FName TypeName; // 0x7c (0x4)
	unsigned char padding_80[0x10]; // 0x80 (0x10)
};

