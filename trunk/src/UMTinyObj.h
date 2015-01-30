/**
 *
 * @file UMTinyObj.h
 *
 * @author tori31001 at gmail.com
 * 
 *
 * Copyright (C) 2014 Kazuma Hatta
 * Licensed under the MIT or GPL Version 3 licenses. 
 *
 */
#pragma once

#include "UMObject.h"
#include "UMAnimation.h"
#include "UMIOSetting.h"

#include <string>

namespace umio
{

class UMTinyObj
{
public:
	UMTinyObj(){}

	~UMTinyObj(){}
	
	/**
	 * load obj file to UMObject
	 */
	UMObjectPtr load(std::string path, const UMIOSetting& setting);
};


} // namespace umio
