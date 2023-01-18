// ScriptStruct /Script/Engine.AnimNode_CustomProperty
// Size: 0x58
struct FAnimNode_CustomProperty : FAnimNode_Base
{
	struct TArray<struct FName> SourcePropertyNames; // 0x10 (0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x20 (0x10)
	class UObject* TargetInstance; // 0x30 (0x8)
	unsigned char padding_38[0x20]; // 0x38 (0x20)
};

