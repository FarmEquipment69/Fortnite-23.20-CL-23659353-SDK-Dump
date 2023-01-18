// Class /Script/Engine.CullDistanceVolume
// Size: 0x2d8
class ACullDistanceVolume : public AVolume
{
	struct TArray<struct FCullDistanceSizePair*> CullDistances; // 0x2c0 (0x10)
	unsigned char bEnabled; // 0x2d0 (0x1)
	unsigned char padding_2d1[0x7]; // 0x2d1 (0x7)
};

