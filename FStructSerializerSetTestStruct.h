// ScriptStruct /Script/Serialization.StructSerializerSetTestStruct
// Size: 0x140
struct FStructSerializerSetTestStruct
{
	struct TSet<struct FString> StrSet; // 0x0 (0x50)
	struct TSet<int> IntSet; // 0x50 (0x50)
	struct TSet<struct FName> NameSet; // 0xa0 (0x50)
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet; // 0xf0 (0x50)
};

