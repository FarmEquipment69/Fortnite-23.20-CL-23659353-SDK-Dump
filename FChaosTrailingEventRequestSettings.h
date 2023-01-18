// ScriptStruct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Size: 0x18
struct FChaosTrailingEventRequestSettings
{
	int MaxNumberOfResults; // 0x0 (0x4)
	float MinMass; // 0x4 (0x4)
	float MinSpeed; // 0x8 (0x4)
	float MinAngularSpeed; // 0xc (0x4)
	float MaxDistance; // 0x10 (0x4)
	enum EChaosTrailingSortMethod SortMethod; // 0x14 (0x1)
	unsigned char padding_15[0x3]; // 0x15 (0x3)
};

