// ScriptStruct /Script/ControlRig.RigUnit_StringSplit
// Size: 0x38
struct FRigUnit_StringSplit : FRigUnit_StringBase
{
	struct FString Value; // 0x8 (0x10)
	struct FString Separator; // 0x18 (0x10)
	struct TArray<struct FString> Result; // 0x28 (0x10)
};

