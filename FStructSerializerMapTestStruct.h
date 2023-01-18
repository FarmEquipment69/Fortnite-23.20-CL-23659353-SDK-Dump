// ScriptStruct /Script/Serialization.StructSerializerMapTestStruct
// Size: 0x140
struct FStructSerializerMapTestStruct
{
	struct TMap<int, struct FString> IntToStr; // 0x0 (0x50)
	struct TMap<struct FString, struct FString> StrToStr; // 0x50 (0x50)
	struct TMap<struct FString, struct FVector> StrToVec; // 0xa0 (0x50)
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0 (0x50)
};

