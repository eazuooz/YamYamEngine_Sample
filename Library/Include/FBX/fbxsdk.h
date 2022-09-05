/****************************************************************************************
 
   Copyright (C) 2016 Autodesk, Inc.
   All rights reserved.
 
   Use of this software is subject to the terms of the Autodesk license agreement
   provided at the time of installation or download, or which otherwise accompanies
   this software in either electronic or hard copy form.
 
****************************************************************************************/

//! \file fbxsdk.h
#ifndef _FBXSDK_H_
#define _FBXSDK_H_

/**
  * \mainpage FBX SDK Reference
  * <p>
  * \section welcome Welcome to the FBX SDK Reference
  * The FBX SDK Reference contains reference information on every header file, 
  * namespace, class, method, enum, typedef, variable, and other C++ elements 
  * that comprise the FBX software development kit (SDK).
  * <p>
  * The FBX SDK Reference is organized into the following sections:
  * <ul><li>Class List: an alphabetical list of FBX SDK classes
  *     <li>Class Hierarchy: a textual representation of the FBX SDK class structure
  *     <li>Graphical Class Hierarchy: a graphical representation of the FBX SDK class structure
  *     <li>File List: an alphabetical list of all documented header files</ul>
  * <p>
  * \section otherdocumentation Other Documentation
  * Apart from this reference guide, an FBX SDK Programming Guide and many FBX 
  * SDK examples are also provided.
  * <p>
  * \section aboutFBXSDK About the FBX SDK
  * The FBX SDK is a C++ software development kit (SDK) that lets you import 
  * and export 3D scenes using the Autodesk FBX file format. The FBX SDK 
  * reads FBX files created with FiLMBOX version 2.5 and later and writes FBX 
  * files compatible with MotionBuilder version 6.0 and up. 
  */

#include <../Library/Include/FBX/fbxsdk/fbxsdk_def.h>

#ifndef FBXSDK_NAMESPACE_USING
	#define FBXSDK_NAMESPACE_USING 1
#endif

//---------------------------------------------------------------------------------------
//Core Base Includes
#include <../Library/Include/FBX/fbxsdk/core/base/fbxarray.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxbitset.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxcharptrset.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxcontainerallocators.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxdynamicarray.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxstatus.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxfile.h>
#ifndef FBXSDK_ENV_WINSTORE
	#include <../Library/Include/FBX/fbxsdk/core/base/fbxfolder.h>
#endif
#include <../Library/Include/FBX/fbxsdk/core/base/fbxhashmap.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxintrusivelist.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxmap.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxmemorypool.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxpair.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxset.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxstring.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxstringlist.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxtime.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxtimecode.h>
#include <../Library/Include/FBX/fbxsdk/core/base/fbxutils.h>

//---------------------------------------------------------------------------------------
//Core Math Includes
#include <../Library/Include/FBX/fbxsdk/core/math/fbxmath.h>
#include <../Library/Include/FBX/fbxsdk/core/math/fbxdualquaternion.h>
#include <../Library/Include/FBX/fbxsdk/core/math/fbxmatrix.h>
#include <../Library/Include/FBX/fbxsdk/core/math/fbxquaternion.h>
#include <../Library/Include/FBX/fbxsdk/core/math/fbxvector2.h>
#include <../Library/Include/FBX/fbxsdk/core/math/fbxvector4.h>

//---------------------------------------------------------------------------------------
//Core Sync Includes
#ifndef FBXSDK_ENV_WINSTORE
	#include <../Library/Include/FBX/fbxsdk/core/sync/fbxatomic.h>
	#include <../Library/Include/FBX/fbxsdk/core/sync/fbxclock.h>
	#include <../Library/Include/FBX/fbxsdk/core/sync/fbxsync.h>
	#include <../Library/Include/FBX/fbxsdk/core/sync/fbxthread.h>
#endif /* !FBXSDK_ENV_WINSTORE */

//---------------------------------------------------------------------------------------
//Core Includes
#include <../Library/Include/FBX/fbxsdk/core/fbxclassid.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxconnectionpoint.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxdatatypes.h>
#ifndef FBXSDK_ENV_WINSTORE
	#include <../Library/Include/FBX/fbxsdk/core/fbxmodule.h>
	#include <../Library/Include/FBX/fbxsdk/core/fbxloadingstrategy.h>
#endif /* !FBXSDK_ENV_WINSTORE */
#include <../Library/Include/FBX/fbxsdk/core/fbxmanager.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxobject.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxperipheral.h>
#ifndef FBXSDK_ENV_WINSTORE
	#include <../Library/Include/FBX/fbxsdk/core/fbxplugin.h>
	#include <../Library/Include/FBX/fbxsdk/core/fbxplugincontainer.h>
#endif /* !FBXSDK_ENV_WINSTORE */
#include <../Library/Include/FBX/fbxsdk/core/fbxproperty.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxpropertydef.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxpropertyhandle.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxpropertypage.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxpropertytypes.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxquery.h>
#include <../Library/Include/FBX/fbxsdk/core/fbxqueryevent.h>
#ifndef FBXSDK_ENV_WINSTORE
	#include <../Library/Include/FBX/fbxsdk/core/fbxscopedloadingdirectory.h>
	#include <../Library/Include/FBX/fbxsdk/core/fbxscopedloadingfilename.h>
#endif /* !FBXSDK_ENV_WINSTORE */
#include <../Library/Include/FBX/fbxsdk/core/fbxxref.h>

//---------------------------------------------------------------------------------------
//File I/O Includes
#include <../Library/Include/FBX/fbxsdk/fileio/fbxexporter.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxexternaldocreflistener.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxfiletokens.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxglobalcamerasettings.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxgloballightsettings.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxgobo.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbximporter.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxiobase.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxiopluginregistry.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxiosettings.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxstatisticsfbx.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxstatistics.h>
#include <../Library/Include/FBX/fbxsdk/fileio/fbxcallbacks.h>

//---------------------------------------------------------------------------------------
//Scene Includes
#include <../Library/Include/FBX/fbxsdk/scene/fbxaudio.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxaudiolayer.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxcollection.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxcollectionexclusive.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxcontainer.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxcontainertemplate.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxdisplaylayer.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxdocument.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxdocumentinfo.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxenvironment.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxgroupname.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxlibrary.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxmediaclip.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxobjectmetadata.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxpose.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxreference.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxscene.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxselectionset.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxselectionnode.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxtakeinfo.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxthumbnail.h>
#include <../Library/Include/FBX/fbxsdk/scene/fbxvideo.h>

//---------------------------------------------------------------------------------------
//Scene Animation Includes
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimcurve.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimcurvebase.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimcurvefilters.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimcurvenode.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimevalclassic.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimevalstate.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimevaluator.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimlayer.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimstack.h>
#include <../Library/Include/FBX/fbxsdk/scene/animation/fbxanimutilities.h>

//---------------------------------------------------------------------------------------
//Scene Constraint Includes
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxcharacternodename.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxcharacter.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxcharacterpose.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraint.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraintaim.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraintcustom.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraintparent.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraintposition.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraintrotation.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraintscale.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraintsinglechainik.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxconstraintutils.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxcontrolset.h>
#include <../Library/Include/FBX/fbxsdk/scene/constraint/fbxhik2fbxcharacter.h>

//---------------------------------------------------------------------------------------
//Scene Geometry Includes
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxblendshape.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxblendshapechannel.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxcache.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxcachedeffect.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxcamera.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxcamerastereo.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxcameraswitcher.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxcluster.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxdeformer.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxgenericnode.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxgeometry.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxgeometrybase.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxgeometryweightedmap.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxlight.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxlimitsutilities.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxline.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxlodgroup.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxmarker.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxmesh.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxnode.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxnodeattribute.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxnull.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxnurbs.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxnurbscurve.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxnurbssurface.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxopticalreference.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxpatch.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxproceduralgeometry.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxshape.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxskeleton.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxskin.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxsubdeformer.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxsubdiv.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxtrimnurbssurface.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxvertexcachedeformer.h>
#include <../Library/Include/FBX/fbxsdk/scene/geometry/fbxweightedmapping.h>

//---------------------------------------------------------------------------------------
//Scene Shading Includes
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxshadingconventions.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxbindingsentryview.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxbindingtable.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxbindingtableentry.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxbindingoperator.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxconstantentryview.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxentryview.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxfiletexture.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbximplementation.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbximplementationfilter.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbximplementationutils.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxlayeredtexture.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxoperatorentryview.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxproceduraltexture.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxpropertyentryview.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxsemanticentryview.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxsurfacelambert.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxsurfacematerial.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxsurfacematerialutils.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxsurfacephong.h>
#include <../Library/Include/FBX/fbxsdk/scene/shading/fbxtexture.h>

//---------------------------------------------------------------------------------------
//Utilities Includes
#include <../Library/Include/FBX/fbxsdk/utils/fbxdeformationsevaluator.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxprocessor.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxprocessorxref.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxprocessorxrefuserlib.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxprocessorshaderdependency.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxclonemanager.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxgeometryconverter.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxmanipulators.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxmaterialconverter.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxrenamingstrategyfbx5.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxrenamingstrategyfbx6.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxrenamingstrategyutilities.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxrootnodeutility.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxusernotification.h>
#include <../Library/Include/FBX/fbxsdk/utils/fbxscenecheckutility.h>

//---------------------------------------------------------------------------------------
#if defined(FBXSDK_NAMESPACE) && (FBXSDK_NAMESPACE_USING == 1)
	using namespace FBXSDK_NAMESPACE;
#endif

#endif /* _FBXSDK_H_ */
