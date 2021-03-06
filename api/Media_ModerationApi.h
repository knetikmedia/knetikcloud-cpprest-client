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
 * Media_ModerationApi.h
 *
 * 
 */

#ifndef Media_ModerationApi_H_
#define Media_ModerationApi_H_


#include "ApiClient.h"

#include "FlagReportResource.h"
#include "FlagResource.h"
#include "PageResource«FlagReportResource».h"
#include "PageResource«FlagResource».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Media_ModerationApi
{
public:
    Media_ModerationApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Media_ModerationApi();
    /// <summary>
    /// Add a flag
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="flagResource">The flag resource object (optional)</param>
    pplx::task<std::shared_ptr<FlagResource>> addFlag(std::shared_ptr<FlagResource> flagResource);
    /// <summary>
    /// Delete a flag
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MODERATION_ADMIN or owner
    /// </remarks>
    /// <param name="contextName">The name of the context (optional)</param>/// <param name="contextId">The id of the context (optional)</param>/// <param name="userId">The id of the user (optional)</param>
    pplx::task<void> deleteFlag(utility::string_t contextName, utility::string_t contextId, int32_t userId);
    /// <summary>
    /// Returns a page of flags
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MODERATION_ADMIN or owner
    /// </remarks>
    /// <param name="filterContext">Filter by flag context (optional)</param>/// <param name="filterContextId">Filter by flag context ID (optional)</param>/// <param name="filterUserId">Filter by user ID (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«FlagResource»>> getFlags(utility::string_t filterContext, utility::string_t filterContextId, int32_t filterUserId, int32_t size, int32_t page);
    /// <summary>
    /// Get a flag report
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MODERATION_ADMIN
    /// </remarks>
    /// <param name="id">The flag report id</param>
    pplx::task<std::shared_ptr<FlagReportResource>> getModerationReport(int64_t id);
    /// <summary>
    /// Returns a page of flag reports
    /// </summary>
    /// <remarks>
    /// Context can be either a free-form string or a pre-defined context name. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MODERATION_ADMIN
    /// </remarks>
    /// <param name="excludeResolved">Ignore resolved context (optional, default to true)</param>/// <param name="filterContext">Filter by moderation context (optional)</param>/// <param name="filterContextId">Filter by moderation context ID (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)</param>
    pplx::task<std::shared_ptr<PageResource«FlagReportResource»>> getModerationReports(bool excludeResolved, utility::string_t filterContext, utility::string_t filterContextId, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update a flag report
    /// </summary>
    /// <remarks>
    /// Lets you set the resolution of a report. Resolution types is {banned,ignore} in case of &#39;banned&#39; you will need to pass the reason. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MODERATION_ADMIN
    /// </remarks>
    /// <param name="id">The flag report id</param>/// <param name="flagReportResource">The new flag report (optional)</param>
    pplx::task<void> updateModerationReport(int64_t id, std::shared_ptr<FlagReportResource> flagReportResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Media_ModerationApi_H_ */

