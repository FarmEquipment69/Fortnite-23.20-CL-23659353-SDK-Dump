// Class /Script/SOMRuntime.ScriptedObjectMovement_StaticPath
// Size: 0x4e0
class AScriptedObjectMovement_StaticPath : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	class USplineComponent* MasterSplinePath; // 0x2a0 (0x8)
	struct TArray<struct FScriptedObjectMovement_StaticPathTravelerData> PathTravelers; // 0x2a8 (0x10)
	struct TArray<struct FScriptedObjectMovement_StaticPathSplineInputKeyData> SplineData; // 0x2b8 (0x10)
	float StepSpacingDistance; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct TWeakObjectPtr<class UScriptedObjectMovement_CalendarCheatDefinition> CheatCalendarEventDefinition; // 0x2d0 (0x28)
	struct FGameplayTag MovementStyleTag; // 0x2f8 (0x4)
	unsigned char unreflected_2fc[0x7c]; // 0x2fc (0x7c) 
	struct FString EnterSplineCalendarEvent; // 0x378 (0x10)
	struct FString ExitSplineCalendarEvent; // 0x388 (0x10)
	struct TArray<struct FStaticPathCalendarSplinePointGroup> OrderedCalendarEventPointGroups; // 0x398 (0x10)
	unsigned char unreflected_3a8[0x128]; // 0x3a8 (0x128) 
	class UFortAsyncAction_CalendarMultiEventWatcher* CalendarWatcherAction; // 0x4d0 (0x8)
	unsigned char padding_4d8[0x8]; // 0x4d8 (0x8)

	/* Functions */

	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.UnlockAllPathsFromBeingRegenerated (Underlying native function: UnlockAllPathsFromBeingRegenerated 0x72d2d3c)
	void UnlockAllPathsFromBeingRegenerated(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.LockAllPathNodesFromBeingRegenerated (Underlying native function: LockAllPathNodesFromBeingRegenerated 0x72d2bb0)
	void LockAllPathNodesFromBeingRegenerated(); // (Final | Native | Public)

	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventUpdated (Underlying native function: HandleCalendarEventUpdated 0x72d27b8)
	void HandleCalendarEventUpdated(struct FString& EventName, struct FTimespan*& TimeUntilEnd, struct FTimespan*& TimeSinceBegin, float& TimespanRatio); // (Native | Protected | HasDefaults)

	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventEnded (Underlying native function: HandleCalendarEventEnded 0x72d2574)
	void HandleCalendarEventEnded(struct FString& EventName, struct FTimespan*& TimeUntilEnd, struct FTimespan*& TimeSinceBegin, float& TimespanRatio); // (Native | Protected | HasDefaults)

	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventActive (Underlying native function: HandleCalendarEventActive 0x72d2330)
	void HandleCalendarEventActive(struct FString& EventName, struct FTimespan*& TimeUntilEnd, struct FTimespan*& TimeSinceBegin, float& TimespanRatio); // (Native | Protected | HasDefaults)

	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.GeneratePathData (Underlying native function: GeneratePathData 0x72d223c)
	void GeneratePathData(); // (Final | Native | Public)
};

