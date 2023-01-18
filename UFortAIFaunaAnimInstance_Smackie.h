// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Smackie
// Size: 0x710
class UFortAIFaunaAnimInstance_Smackie : public UFortAIFaunaAnimInstance
{
	bool bIsIdleShuffleTurn; // 0x6d0 (0x1)
	unsigned char unreflected_6d1[0x3]; // 0x6d1 (0x3) 
	float IdleShuffleBodyBend; // 0x6d4 (0x4)
	float IdleShufflePlayRate; // 0x6d8 (0x4)
	bool bIdleShuffleTurnDirection; // 0x6dc (0x1)
	bool bCanTransitionIdleToHop; // 0x6dd (0x1)
	bool bCanTransitionHopToIdle; // 0x6de (0x1)
	bool bCanTransitionFallToIdle; // 0x6df (0x1)
	bool bCanTransitionFallToHop; // 0x6e0 (0x1)
	unsigned char unreflected_6e1[0x3]; // 0x6e1 (0x3) 
	float SpeedThreshold; // 0x6e4 (0x4)
	float IdleShuffleBodyBendMultiplier; // 0x6e8 (0x4)
	float IdleShuffleTurnThreshold; // 0x6ec (0x4)
	float IdleShuffleTurnDirectionThreshold; // 0x6f0 (0x4)
	float IdleShufflePlayRateInRangeA; // 0x6f4 (0x4)
	float IdleShufflePlayRateInRangeB; // 0x6f8 (0x4)
	float IdleShufflePlayRateOutRangeA; // 0x6fc (0x4)
	float IdleShufflePlayRateOutRangeB; // 0x700 (0x4)
	unsigned char padding_704[0xc]; // 0x704 (0xc)
};

