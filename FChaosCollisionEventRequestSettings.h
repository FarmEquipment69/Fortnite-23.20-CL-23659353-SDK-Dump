// ScriptStruct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Size: 0x18
struct FChaosCollisionEventRequestSettings
{
	int MaxNumberResults; // 0x0 (0x4)
	float MinMass; // 0x4 (0x4)
	float MinSpeed; // 0x8 (0x4)
	float MinImpulse; // 0xc (0x4)
	float MaxDistance; // 0x10 (0x4)
	enum EChaosCollisionSortMethod SortMethod; // 0x14 (0x1)
	unsigned char padding_15[0x3]; // 0x15 (0x3)
};

