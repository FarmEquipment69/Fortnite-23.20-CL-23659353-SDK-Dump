// Class /Script/FortniteAI.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
// Size: 0xe0
class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween : public UBTService
{
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70 (0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98 (0x28)
	float MinDistance; // 0xc0 (0x4)
	float MaxDistance; // 0xc4 (0x4)
	float MinDistanceSpeed; // 0xc8 (0x4)
	float MaxDistanceSpeed; // 0xcc (0x4)
	bool bCalculateAs2D; // 0xd0 (0x1)
	unsigned char padding_d1[0xf]; // 0xd1 (0xf)
};

