// ScriptStruct /Script/Engine.BPVariableDescription
// Size: 0xb8
struct FBPVariableDescription
{
	struct FName VarName; // 0x0 (0x4)
	struct FGuid VarGuid; // 0x4 (0x10)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FEdGraphPinType VarType; // 0x18 (0x48)
	struct FString FriendlyName; // 0x60 (0x10)
	struct FText category; // 0x70 (0x18)
	uint64_t PropertyFlags; // 0x88 (0x8)
	struct FName RepNotifyFunc; // 0x90 (0x4)
	struct TEnumAsByte<ELifetimeCondition> ReplicationCondition; // 0x94 (0x1)
	unsigned char unreflected_95[0x3]; // 0x95 (0x3) 
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0x98 (0x10)
	struct FString DefaultValue; // 0xa8 (0x10)
};

