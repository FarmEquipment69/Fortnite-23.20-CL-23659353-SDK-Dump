// Class /Script/FortniteGame.FortCarriedObjectHolderInterface
// Size: 0x28
class IFortCarriedObjectHolderInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.OnCarriedObjectDetach (Underlying native function: OnCarriedObjectDetach 0x80a6320)
	void OnCarriedObjectDetach(class AActor*& DetachedObject); // (Native | Public)

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.OnCarriedObjectAttach (Underlying native function: OnCarriedObjectAttach 0x80a63a0)
	void OnCarriedObjectAttach(class AActor*& AttachedObject); // (Native | Public)

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.GetCarriedObjectAttachmentInfo (Underlying native function: GetCarriedObjectAttachmentInfo 0x868baf4)
	void GetCarriedObjectAttachmentInfo(struct FCarriedObjectAttachmentInfo& OutAttachInfo); // (Native | Public | HasOutParms | Const)

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.GetAttachmentComponent (Underlying native function: GetAttachmentComponent 0x868b76c)
	class USceneComponent* GetAttachmentComponent(struct FName& SocketName); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortCarriedObjectHolderInterface.CanHoldObject (Underlying native function: CanHoldObject 0x8094740)
	bool CanHoldObject(class AActor*& CarriableObject); // (Native | Public | Const)
};

