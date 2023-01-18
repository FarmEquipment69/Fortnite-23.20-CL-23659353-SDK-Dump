// ScriptStruct /Script/DeltaFileSystem.DeltaAction
// Size: 0x20
struct FDeltaAction
{
	struct FGuid ActorGUID; // 0x0 (0x10)
	struct FDateTime* CommitTime; // 0x10 (0x8)
	uint32_t DataHash; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

