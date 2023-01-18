// Class /Script/FortniteUI.PowTimerWidgetBase
// Size: 0x360
class UPowTimerWidgetBase : public ULTMWidgetBase
{
	struct FScalableFloat TimeShowTimerAt; // 0x328 (0x28)
	class AFortAthenaMutator_Pow* BaseMutator; // 0x350 (0x8)
	unsigned char padding_358[0x8]; // 0x358 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.PowTimerWidgetBase.OnUpdatedRespawnTime (Has no native function)
	void OnUpdatedRespawnTime(int& Minutes, int& Seconds); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.PowTimerWidgetBase.OnRespawnTimeElasped (Has no native function)
	void OnRespawnTimeElasped(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.PowTimerWidgetBase.NewRespawnTime (Underlying native function: NewRespawnTime 0xa57e928)
	void NewRespawnTime(int& NewTimeRemaining); // (Final | Native | Private)
};

