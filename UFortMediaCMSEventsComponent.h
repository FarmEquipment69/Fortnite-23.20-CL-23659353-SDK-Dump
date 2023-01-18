// Class /Script/FortniteGame.FortMediaCMSEventsComponent
// Size: 0x170
class UFortMediaCMSEventsComponent : public UActorComponent
{
	struct FMulticastInlineDelegate MediaStartedEvent; // 0xa0 (0x10)
	struct FMulticastInlineDelegate MediaEndedEvent; // 0xb0 (0x10)
	bool bInitialized; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x7]; // 0xc1 (0x7) 
	struct FString CurrentContinent; // 0xc8 (0x10)
	struct FString CurrentCountry; // 0xd8 (0x10)
	struct TArray<struct FString> CurrentSubdivisions; // 0xe8 (0x10)
	struct FString EventPageName; // 0xf8 (0x10)
	class UClass* CMSType; // 0x108 (0x8)
	struct TArray<class UMediaCMSEvent*> ValidMediaEvents; // 0x110 (0x10)
	struct TArray<class UMediaCMSEvent*> MediaEvents; // 0x120 (0x10)
	unsigned char padding_130[0x40]; // 0x130 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaCMSEventsComponent.InitializeEventPageCustomData (Underlying native function: InitializeEventPageCustomData 0x896d010)
	void InitializeEventPageCustomData(struct FString& InEventPageName, class UClass*& InCMSType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaCMSEventsComponent.InitializeEventPage (Underlying native function: InitializeEventPage 0x896cebc)
	void InitializeEventPage(struct FString& InEventPageName); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaCMSEventsComponent.GetValidMediaEvents (Underlying native function: GetValidMediaEvents 0x896cea0)
	struct TArray<class UMediaCMSEvent*> GetValidMediaEvents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMediaCMSEventsComponent.GetAllMediaEvents (Underlying native function: GetAllMediaEvents 0x896c3ec)
	struct TArray<class UMediaCMSEvent*> GetAllMediaEvents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

