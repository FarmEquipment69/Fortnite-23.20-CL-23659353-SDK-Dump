// ScriptStruct /Script/FortniteGame.TrackedObjectiveArray
// Size: 0x128
struct FTrackedObjectiveArray : FFastArraySerializer
{
	struct TArray<struct FTrackedObjective> Objectives; // 0x108 (0x10)
	int NextTrackedIndex; // 0x118 (0x4)
	unsigned char padding_11c[0xc]; // 0x11c (0xc)
};

