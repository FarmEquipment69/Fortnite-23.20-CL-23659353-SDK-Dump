// Class /Script/FortniteGame.LockableInterface
// Size: 0x28
class ILockableInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.LockableInterface.OnUnLocked (Has no native function)
	void OnUnLocked(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LockableInterface.OnLocked (Has no native function)
	void OnLocked(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LockableInterface.GetComponentToLock (Underlying native function: GetComponentToLock 0x80ace28)
	struct TArray<class UPrimitiveComponent*> GetComponentToLock(); // (Native | Event | Public | BlueprintEvent)
};

