// Class /Script/FortniteUI.FortTimerTimespanDataSource
// Size: 0x60
class UFortTimerTimespanDataSource : public UObject
{
	unsigned char unreflected_60[0x60]; 

	/* Functions */

	// DelegateFunction /Script/FortniteUI.FortTimerTimespanDataSource.TimespanSourceDelegate__DelegateSignature (Has no native function)
	void TimespanSourceDelegateDelegateSignature(struct FTimespan*& Result); // (Public | Delegate | HasOutParms | HasDefaults)

	// Function /Script/FortniteUI.FortTimerTimespanDataSource.TickManually (Underlying native function: TickManually 0xa693c44)
	void TickManually(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTimerTimespanDataSource.StopTimer (Underlying native function: StopTimer 0xa693be8)
	void StopTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTimerTimespanDataSource.StartTimer (Underlying native function: StartTimer 0xa693b1c)
	void StartTimer(float& Delay, bool& bTickImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTimerTimespanDataSource.SetTimespanSource (Underlying native function: SetTimespanSource 0xa693958)
	void SetTimespanSource(struct FDelegate& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortTimerTimespanDataSource.FortTimespanDataSourceOnChangeInternalDelegate__DelegateSignature (Has no native function)
	void FortTimespanDataSourceOnChangeInternalDelegateDelegateSignature(class UObject*& Source); // (MulticastDelegate | Public | Delegate)
};

