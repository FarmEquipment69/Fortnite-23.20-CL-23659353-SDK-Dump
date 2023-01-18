// ScriptStruct /Script/Serialization.StructSerializerArrayTestStruct
// Size: 0x60
struct FStructSerializerArrayTestStruct
{
	struct TArray<int> Int32Array; // 0x0 (0x10)
	struct TArray<unsigned char> ByteArray; // 0x10 (0x10)
	int StaticSingleElement; // 0x20 (0x4)
	int StaticInt32Array[0x3]; // 0x24 (0x4) (ARRAY) 
	float StaticFloatArray[0x3]; // 0x30 (0x4) (ARRAY) 
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FVector> VectorArray; // 0x40 (0x10)
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; // 0x50 (0x10)
};

