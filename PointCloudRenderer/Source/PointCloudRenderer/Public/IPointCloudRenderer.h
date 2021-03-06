// (c) 2017 by Valentin Kraft, http://www.valentinkraft.de

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"


/**
 * The public interface to the Point Cloud Renderer module.
 * @Author Valentin Kraft
 */
class IPointCloudRenderer : public IModuleInterface
{

public:

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IPointCloudRenderer& Get()
	{
		return FModuleManager::LoadModuleChecked< IPointCloudRenderer >( "PointCloudRenderer" );
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "PointCloudRenderer" );
	}

	virtual int LoadPCDFile() = 0;
};

