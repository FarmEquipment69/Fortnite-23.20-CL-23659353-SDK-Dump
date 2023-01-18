// Class /Script/FortniteGame.FortGameStateComponent_FrontEndFlowSTW
// Size: 0x128
class UFortGameStateComponent_FrontEndFlowSTW : public UGameStateComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	class UClass* NameHomebaseAnnouncement; // 0xa8 (0x8)
	class UClass* SatelliteCinematicAnnouncement; // 0xb0 (0x8)
	class UClass* BannerWidgetClass; // 0xb8 (0x8)
	struct TWeakObjectPtr<class UWorld> CompositeWorld; // 0xc0 (0x28)
	struct FDataTableRowHandle OnboardingCompleteZoneStatHandle; // 0xe8 (0x10)
	struct FDataTableRowHandle OnboardingWatchSatelliteCineStatHandle; // 0xf8 (0x10)
	struct FDataTableRowHandle OnboardingNameHomebaseStatHandle; // 0x108 (0x10)
	unsigned char padding_118[0x10]; // 0x118 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_FrontEndFlowSTW.OnSatelliteAnnouncementEnded (Underlying native function: OnSatelliteAnnouncementEnded 0x8e7fe00)
	void OnSatelliteAnnouncementEnded(class AFortClientAnnouncement*& Announcement); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateComponent_FrontEndFlowSTW.OnNameHomebaseAnnouncementEnded (Underlying native function: OnNameHomebaseAnnouncementEnded 0x8e7f5a4)
	void OnNameHomebaseAnnouncementEnded(class AFortClientAnnouncement*& Announcement); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateComponent_FrontEndFlowSTW.HandleClientEvent_HomebasePersonalized (Underlying native function: HandleClientEvent_HomebasePersonalized 0x8e7ee58)
	void HandleClientEventHomebasePersonalized(); // (Final | Native | Public)
};

