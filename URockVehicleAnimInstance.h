// Class /Script/RockVehicleRuntime.RockVehicleAnimInstance
// Size: 0x770
class URockVehicleAnimInstance : public UFortVehicleAnimInstance
{
	struct FBouncyChassisState BouncyChassis; // 0x5f0 (0xc)
	struct FRockVehicleWheelAnimInfo WheelInfoFR; // 0x5fc (0x14)
	struct FRockVehicleWheelAnimInfo WheelInfoFL; // 0x610 (0x14)
	struct FRockVehicleWheelAnimInfo WheelInfoBR; // 0x624 (0x14)
	struct FRockVehicleWheelAnimInfo WheelInfoBL; // 0x638 (0x14)
	float WheelLerpSpeed; // 0x64c (0x4)
	unsigned char padding_650[0x120]; // 0x650 (0x120)
};

