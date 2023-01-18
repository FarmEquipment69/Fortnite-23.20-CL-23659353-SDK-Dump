// Class /Script/FortniteGame.FortClientAnnouncementManager
// Size: 0x3b0
class AFortClientAnnouncementManager : public AActor
{
	unsigned char unreflected_288[0x28]; // 0x288 (0x28) 
	struct TArray<struct TWeakObjectPtr<class AFortClientAnnouncement>> ClientAnnouncements; // 0x2b0 (0x10)
	struct TArray<struct TWeakObjectPtr<class AFortClientAnnouncement>> LocalClientAnnouncements; // 0x2c0 (0x10)
	struct TArray<struct FGuid> CancelledAnnouncements; // 0x2d0 (0x10)
	struct FFortClientAnnouncementQueue Channels[0x3]; // 0x2e0 (0x10) (ARRAY) 
	unsigned char padding_310[0xa0]; // 0x310 (0xa0)

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncementManager.OnRep_ClientAnnouncements (Underlying native function: OnRep_ClientAnnouncements 0x8266678)
	void OnRepClientAnnouncements(struct TArray<struct TWeakObjectPtr<class AFortClientAnnouncement>>& PreviousClientAnnouncements); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortClientAnnouncementManager.OnRep_CancelledAnnouncements (Underlying native function: OnRep_CancelledAnnouncements 0x8266650)
	void OnRepCancelledAnnouncements(); // (Final | Native | Protected)
};

