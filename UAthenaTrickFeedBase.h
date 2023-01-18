// Class /Script/FortniteUI.AthenaTrickFeedBase
// Size: 0x2f8
class UAthenaTrickFeedBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2f8[0x2f8]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaTrickFeedBase.UpdateTrickStats (Has no native function)
	void UpdateTrickStats(struct FText& StatsText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTrickFeedBase.UpdateScore (Has no native function)
	void UpdateScore(class UFortVehicleTrickSet*& TrickSet, int& TotalScore); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTrickFeedBase.UpdateMultiplier (Has no native function)
	void UpdateMultiplier(int& Multiplier); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTrickFeedBase.TrickSequenceStarted (Has no native function)
	void TrickSequenceStarted(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTrickFeedBase.TrickSequenceFailed (Has no native function)
	void TrickSequenceFailed(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTrickFeedBase.TrickSequenceComplete (Has no native function)
	void TrickSequenceComplete(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTrickFeedBase.TrickSequenceCanceled (Has no native function)
	void TrickSequenceCanceled(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTrickFeedBase.RequestNextSequence (Underlying native function: RequestNextSequence 0xa4b069c)
	void RequestNextSequence(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaTrickFeedBase.AddTrick (Has no native function)
	void AddTrick(struct FText& TrickName); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)
};

