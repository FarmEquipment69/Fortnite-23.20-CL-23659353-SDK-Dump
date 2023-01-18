// Class /Script/FortniteGame.FortClientAnnouncement
// Size: 0x2f8
class AFortClientAnnouncement : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FGuid AnnouncementID; // 0x290 (0x10)
	class UClass* DisplayWidget; // 0x2a0 (0x8)
	float TimeToLive; // 0x2a8 (0x4)
	bool bRetrigger; // 0x2ac (0x1)
	bool bDestroyOnAllClientsStopped; // 0x2ad (0x1)
	enum EFortAnnouncementChannel Channel; // 0x2ae (0x1)
	unsigned char unreflected_2af[0x1]; // 0x2af (0x1) 
	int Priority; // 0x2b0 (0x4)
	bool bInterrupt; // 0x2b4 (0x1)
	unsigned char unreflected_2b5[0x1]; // 0x2b5 (0x1) 
	enum EFortAnnouncementDelivery ClientDeliveryStatus; // 0x2b6 (0x1)
	unsigned char unreflected_2b7[0x1]; // 0x2b7 (0x1) 
	float ClientDeliveryTime; // 0x2b8 (0x4)
	unsigned char unreflected_2bc[0x4]; // 0x2bc (0x4) 
	struct FMulticastInlineDelegate OnUpdateAnnouncementData; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnAnnouncementStopped; // 0x2d0 (0x10)
	struct TArray<class AFortPlayerController*> RecipientControllers; // 0x2e0 (0x10)
	unsigned char padding_2f0[0x8]; // 0x2f0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement.StopClientAnnouncement (Underlying native function: StopClientAnnouncement 0x22c0e58)
	void StopClientAnnouncement(); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement.OnClientAnnouncementStop (Has no native function)
	void OnClientAnnouncementStop(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortClientAnnouncement.OnClientAnnouncementStart (Has no native function)
	void OnClientAnnouncementStart(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortClientAnnouncement.GetPriority (Underlying native function: GetPriority 0x2d00eec)
	int GetPriority(); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement.CancelClientAnnouncement (Underlying native function: CancelClientAnnouncement 0x8264f30)
	void CancelClientAnnouncement(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

