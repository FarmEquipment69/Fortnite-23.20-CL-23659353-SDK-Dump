// Class /Script/FortniteGame.FortHotfixBlockingVolume
// Size: 0x2b0
class AFortHotfixBlockingVolume : public AActor
{
	class UBoxComponent* BlockBoxComponent; // 0x288 (0x8)
	struct FVector ReplicatedExtent; // 0x290 (0x18)
	bool bNeededOnClient; // 0x2a8 (0x1)
	unsigned char padding_2a9[0x7]; // 0x2a9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortHotfixBlockingVolume.OnRep_ReplicatedExtent (Underlying native function: OnRep_ReplicatedExtent 0x809c4e8)
	void OnRepReplicatedExtent(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortHotfixBlockingVolume.CopyToClipboard (Underlying native function: CopyToClipboard 0x26daa0c)
	void CopyToClipboard(); // (Final | Native | Public)
};

