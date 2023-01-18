// Class /Script/FortniteGame.NativePlayStopPauseInterface
// Size: 0x28
class INativePlayStopPauseInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.NativePlayStopPauseInterface.Blueprint_Stop (Has no native function)
	void BlueprintStop(bool& bFailedToStop); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.NativePlayStopPauseInterface.Blueprint_Play (Has no native function)
	void BlueprintPlay(bool& bUnpaused, bool& bFailedToPlay); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.NativePlayStopPauseInterface.Blueprint_Pause (Has no native function)
	void BlueprintPause(bool& bFailedToPause); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.NativePlayStopPauseInterface.Blueprint_GetExecutionContext (Has no native function)
	void BlueprintGetExecutionContext(enum EPlayStopPauseExecutionContext& execContext); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

