/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of COLLADAFramework.

    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#include "COLLADAMayaStableHeaders.h"
#include "COLLADAMayaShadingBinding.h"


namespace COLLADAMaya
{

    //------------------------------
	ShadingBinding::ShadingBinding()
	{
	}

    //------------------------------
    ShadingBinding::ShadingBinding ( 
        const COLLADAFW::UniqueId& geometryId, 
        const COLLADAFW::UniqueId& transformId, 
        const COLLADAFW::MaterialId& shadingEngineId ) 
        : mGeometryId (geometryId)
        , mTransformId (transformId)
        , mShadingEngineId (shadingEngineId)
    {

    }

    //------------------------------
	ShadingBinding::~ShadingBinding()
	{
	}

    //------------------------------
    bool ShadingBinding::operator< ( const ShadingBinding& rhs ) const
    {
        if ( mGeometryId < rhs.mGeometryId )
            return true;
        if ( mGeometryId > rhs.mGeometryId )
            return false;

        if ( mTransformId < rhs.mTransformId )
            return true;
        if ( mTransformId > rhs.mTransformId )
            return false;

        if ( mShadingEngineId < rhs.mShadingEngineId )
            return true;
        if ( mShadingEngineId > rhs.mShadingEngineId )
            return false;

        return false;
    }

    //------------------------------
    bool ShadingBinding::operator== ( const ShadingBinding& uid ) const
    {
        if ( mGeometryId != uid.mGeometryId ) return false;
        if ( mTransformId != uid.mTransformId ) return false;
        if ( mShadingEngineId != uid.mShadingEngineId ) return false;
        return true;
    }

} // namespace COLLADAMaya