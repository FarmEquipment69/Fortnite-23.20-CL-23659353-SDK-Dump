// Class /Script/AIModule.AISense_Touch
// Size: 0x90
class UAISense_Touch : public UAISense
{
	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x80 (0x10)

	/* Functions */

	// Function /Script/AIModule.AISense_Touch.ReportTouchEvent (Underlying native function: ReportTouchEvent 0xa1e3764)
	static void ReportTouchEvent(class UObject*& WorldContextObject, class AActor*& TouchReceiver, class AActor*& OtherActor, struct FVector& Location); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

