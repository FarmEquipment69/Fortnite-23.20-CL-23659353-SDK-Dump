// Class /Script/FortniteGame.FortContentBeaconClientV2
// Size: 0x638
class AFortContentBeaconClientV2 : public AContentBeaconClientV2
{
	bool IsPendingProjectIDSet; // 0x620 (0x1)
	unsigned char unreflected_621[0x7]; // 0x621 (0x7) 
	struct FString PendingProjectID; // 0x628 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortContentBeaconClientV2.PartyLeaderConnected (Underlying native function: PartyLeaderConnected 0x8b9d030)
	void PartyLeaderConnected(struct FString& ProjectID); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)
};

