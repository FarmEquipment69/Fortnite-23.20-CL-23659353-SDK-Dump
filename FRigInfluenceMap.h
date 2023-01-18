// ScriptStruct /Script/ControlRig.RigInfluenceMap
// Size: 0x68
struct FRigInfluenceMap
{
	struct FName EventName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FRigInfluenceEntry> Entries; // 0x8 (0x10)
	struct TMap<struct FRigElementKey*, int> KeyToIndex; // 0x18 (0x50)
};

