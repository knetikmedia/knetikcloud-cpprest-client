/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * UtilMaintenanceApi.h
 *
 * 
 */

#ifndef UtilMaintenanceApi_H_
#define UtilMaintenanceApi_H_


#include "ApiClient.h"

#include "Maintenance.h"
#include "Result.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  UtilMaintenanceApi
{
public:
    UtilMaintenanceApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UtilMaintenanceApi();
    /// <summary>
    /// Delete maintenance info
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MAINTENANCE_ADMIN
    /// </remarks>
    
    pplx::task<void> deleteMaintenance();
    /// <summary>
    /// Get current maintenance info
    /// </summary>
    /// <remarks>
    /// Get current maintenance info. 404 if no maintenance. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    
    pplx::task<std::shared_ptr<Maintenance>> getMaintenance();
    /// <summary>
    /// Set current maintenance info
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MAINTENANCE_ADMIN
    /// </remarks>
    /// <param name="maintenance">The maintenance object (optional)</param>
    pplx::task<void> setMaintenance(std::shared_ptr<Maintenance> maintenance);
    /// <summary>
    /// Update current maintenance info
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MAINTENANCE_ADMIN
    /// </remarks>
    /// <param name="maintenance">The maintenance object (optional)</param>
    pplx::task<void> updateMaintenance(std::shared_ptr<Maintenance> maintenance);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* UtilMaintenanceApi_H_ */

