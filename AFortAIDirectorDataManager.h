// Class /Script/FortniteAI.FortAIDirectorDataManager
// Size: 0x368
class AFortAIDirectorDataManager : public AActor
{
	class UObject* OwnerObject; // 0x288 (0x8)
	struct TArray<struct FAIDirectorEventData> EventsToTrack; // 0x290 (0x10)
	struct TArray<struct FFortAIDirectorFactorData> FactorsToTrack; // 0x2a0 (0x10)
	unsigned char unreflected_2b0[0xa0]; // 0x2b0 (0xa0) 
	struct TArray<enum EFortAIDirectorFactor> FactorsBeingTracked; // 0x350 (0x10)
	unsigned char padding_360[0x8]; // 0x360 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAIDirectorDataManager.TriggerEvent (Underlying native function: TriggerEvent 0xa2689d8)
	void TriggerEvent(struct FFortAIDirectorEvent& TriggeredEvent); // (Native | Public | HasOutParms)

	// Function /Script/FortniteAI.FortAIDirectorDataManager.GetAIDirectorFactorValue (Underlying native function: GetAIDirectorFactorValue 0xa264794)
	float GetAIDirectorFactorValue(enum EFortAIDirectorFactor& AIDirectorFactor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

