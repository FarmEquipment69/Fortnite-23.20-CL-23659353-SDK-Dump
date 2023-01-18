// Class /Script/FortniteGame.FortHotfixUndergroundVolume
// Size: 0x2b0
class AFortHotfixUndergroundVolume : public AActor
{
	class UBoxComponent* TriggerBoxComponent; // 0x288 (0x8)
	struct FVector ReplicatedExtent; // 0x290 (0x18)
	bool bNeededOnClient; // 0x2a8 (0x1)
	unsigned char padding_2a9[0x7]; // 0x2a9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortHotfixUndergroundVolume.OnRep_ReplicatedExtent (Underlying native function: OnRep_ReplicatedExtent 0x809c4e8)
	void OnRepReplicatedExtent(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortHotfixUndergroundVolume.OnOverlapEnd (Underlying native function: OnOverlapEnd 0x8392254)
	void OnOverlapEnd(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortHotfixUndergroundVolume.OnOverlapBegin (Underlying native function: OnOverlapBegin 0x839206c)
	void OnOverlapBegin(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHotfixUndergroundVolume.CopyToClipboard (Underlying native function: CopyToClipboard 0x26daa0c)
	void CopyToClipboard(); // (Final | Native | Public)
};

