// Class /Script/FortniteGame.AthenaBigBaseWall
// Size: 0xa68
class AAthenaBigBaseWall : public ABuildingGameplayActor
{
	float WallGravity; // 0x9d8 (0x4)
	float TimeUntilWallComesDown; // 0x9dc (0x4)
	bool bResetBool; // 0x9e0 (0x1)
	enum EBarrierState BarrierState; // 0x9e1 (0x1)
	unsigned char unreflected_9e2[0x6]; // 0x9e2 (0x6) 
	struct FScalableFloat ZKillLevel; // 0x9e8 (0x28)
	unsigned char padding_a10[0x58]; // 0xa10 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.AthenaBigBaseWall.WallStartingToComeDown (Has no native function)
	void WallStartingToComeDown(bool& bIsOnBurgerSide); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBigBaseWall.UpdateWallTime (Has no native function)
	void UpdateWallTime(float& Digit0, float& Digit1, float& Digit2, float& Digit3); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBigBaseWall.ShowOrHideTimer (Has no native function)
	void ShowOrHideTimer(bool& bNewVisibleState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBigBaseWall.OnRep_WallGravity (Underlying native function: OnRep_WallGravity 0x8266b6c)
	void OnRepWallGravity(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBigBaseWall.OnRep_TimeUntilWallComesDown (Underlying native function: OnRep_TimeUntilWallComesDown 0x82669e8)
	void OnRepTimeUntilWallComesDown(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBigBaseWall.OnRep_ResetBool (Underlying native function: OnRep_ResetBool 0x26daa0c)
	void OnRepResetBool(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBigBaseWall.OnRep_BarrierState (Underlying native function: OnRep_BarrierState 0x8266548)
	void OnRepBarrierState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBigBaseWall.OnNewBarrierState (Has no native function)
	void OnNewBarrierState(enum EBarrierState& NewState); // (Event | Protected | BlueprintEvent)
};

