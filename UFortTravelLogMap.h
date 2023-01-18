// Class /Script/FortniteUI.FortTravelLogMap
// Size: 0x298
class UFortTravelLogMap : public UUserWidget
{
	float MapSize; // 0x268 (0x4)
	float CurrentTimeFraction; // 0x26c (0x4)
	int DistanceToCoalescePositions; // 0x270 (0x4)
	unsigned char padding_274[0x24]; // 0x274 (0x24)

	/* Functions */

	// Function /Script/FortniteUI.FortTravelLogMap.InitializeFromTravelRecord (Underlying native function: InitializeFromTravelRecord 0xa50a63c)
	void InitializeFromTravelRecord(struct FAthenaTravelRecord& Record); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

