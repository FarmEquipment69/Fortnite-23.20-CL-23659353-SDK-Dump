// Class /Script/FortniteGame.FortFeedbackManager
// Size: 0x3c0
class AFortFeedbackManager : public AActor
{
	struct TArray<struct FFortFeedbackEventData> FeedbackEvents; // 0x288 (0x10)
	bool bUsesStWFeedbackEvents; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	struct TArray<struct FFortFeedbackEventData> BankDefinedFeedbackEvents; // 0x2a0 (0x10)
	class UClass* AnnouncerPawnClass; // 0x2b0 (0x8)
	class AFortPawn_FeedbackAnnouncer* Announcer; // 0x2b8 (0x8)
	struct TArray<struct TWeakObjectPtr<class AController>> SuppressedControllers; // 0x2c0 (0x10)
	unsigned char padding_2d0[0xf0]; // 0x2d0 (0xf0)

	/* Functions */

	// Function /Script/FortniteGame.FortFeedbackManager.SuppressProceduralFeedback (Underlying native function: SuppressProceduralFeedback 0x8e61038)
	void SuppressProceduralFeedback(struct TArray<class AController*>& ControllersToSuppress); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFeedbackManager.GetFeedbackManager (Underlying native function: GetFeedbackManager 0x8e5e58c)
	static class AFortFeedbackManager* GetFeedbackManager(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortFeedbackManager.GetAnnouncerPawn (Underlying native function: GetAnnouncerPawn 0x8e5e058)
	static class AFortPawn_FeedbackAnnouncer* GetAnnouncerPawn(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

