// ScriptStruct /Script/ControlRig.RigInfluenceMapPerEvent
// Size: 0x60
struct FRigInfluenceMapPerEvent
{
	struct TArray<struct FRigInfluenceMap> Maps; // 0x0 (0x10)
	struct TMap<struct FName, int> EventToIndex; // 0x10 (0x50)
};

