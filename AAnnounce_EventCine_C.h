// BlueprintGeneratedClass /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C
// Size: 0x330
class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x308 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x310 (0x8)
	class UMediaSource* EventMediaSource; // 0x318 (0x8)
	bool AllowSkipping; // 0x320 (0x1)
	unsigned char unreflected_321[0x7]; // 0x321 (0x7) 
	class UFortMediaSubtitlesPlayer* EventSubtitlesPlayer; // 0x328 (0x8)

	/* Functions */

	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop (Has no native function)
	void OnClientAnnouncementStop(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene (Has no native function)
	void OnPlayerSkippedCutscene(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying (Has no native function)
	void HandleClientEventCinematicFinishedPlaying(class UObject*& EventSource, class UObject*& EventFocus, struct FFortClientEvent& ClientEvent); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.HandleAllowSkip (Has no native function)
	void HandleAllowSkip(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState (Has no native function)
	void OnEnteredCinematicState(); // (Event | Protected | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine (Has no native function)
	void ExecuteUbergraphAnnounceEventCine(int& EntryPoint, bool& TempboolIsClosedVariable, class UObject*& K2NodeHandleClientEventEventSource, class UObject*& K2NodeHandleClientEventEventFocus, struct FFortClientEvent& K2NodeHandleClientEventClientEvent, bool& TempboolHasBeenInitdVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UFortMediaInfo*& CallFuncSpawnObjectReturnValue); // (Final | 0x00008000 | HasDefaults)
};

