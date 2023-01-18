// Class /Script/FortniteGame.PlayspaceComponent_ContentGating
// Size: 0x170
class UPlayspaceComponent_ContentGating : public UFortPlayspaceComponent
{
	unsigned char unreflected_f8[0x18]; // 0xf8 (0x18) 
	struct TWeakObjectPtr<class UFortCreativeContentGatingData> ContentGatingData; // 0x110 (0x28)
	unsigned char unreflected_138[0x10]; // 0x138 (0x10) 
	class UFortCreativeTagFilter* ContentFilter; // 0x148 (0x8)
	struct FFortContentGatingProfile ContentProfile; // 0x150 (0x18)
	unsigned char padding_168[0x8]; // 0x168 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_ContentGating.OnRep_ContentProfileChanged (Underlying native function: OnRep_ContentProfileChanged 0x8ddeb98)
	void OnRepContentProfileChanged(); // (Final | Native | Protected)
};

