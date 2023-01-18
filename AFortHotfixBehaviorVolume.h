// Class /Script/FortniteGame.FortHotfixBehaviorVolume
// Size: 0x290
class AFortHotfixBehaviorVolume : public AActor
{
	class UBoxComponent* TriggerBoxComponent; // 0x288 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortHotfixBehaviorVolume.OnOverlapEnd (Underlying native function: OnOverlapEnd 0x809c3a0)
	void OnOverlapEnd(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortHotfixBehaviorVolume.OnOverlapBegin (Underlying native function: OnOverlapBegin 0x809bf54)
	void OnOverlapBegin(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHotfixBehaviorVolume.CopyToClipboard (Underlying native function: CopyToClipboard 0x26daa0c)
	void CopyToClipboard(); // (Final | Native | Public)
};

