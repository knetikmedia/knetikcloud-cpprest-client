/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ContentPollsApi.h
 *
 * 
 */

#ifndef ContentPollsApi_H_
#define ContentPollsApi_H_


#include "ApiClient.h"

#include "PageResource«PollResource».h"
#include "PageResource«TemplateResource».h"
#include "PollResource.h"
#include "PollResponseResource.h"
#include "Result.h"
#include "TemplateResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  ContentPollsApi
{
public:
    ContentPollsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~ContentPollsApi();
    /// <summary>
    /// Add your vote to a poll
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The poll id</param>/// <param name="answerKey">The answer key (optional)</param>
    pplx::task<std::shared_ptr<PollResponseResource>> answerPoll(utility::string_t id, utility::string_t answerKey);
    /// <summary>
    /// Create a new poll
    /// </summary>
    /// <remarks>
    /// Polls are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.
    /// </remarks>
    /// <param name="pollResource">The poll object (optional)</param>
    pplx::task<std::shared_ptr<PollResource>> createPoll(std::shared_ptr<PollResource> pollResource);
    /// <summary>
    /// Create a poll template
    /// </summary>
    /// <remarks>
    /// Poll templates define a type of poll and the properties they have
    /// </remarks>
    /// <param name="pollTemplateResource">The poll template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createPollTemplate(std::shared_ptr<TemplateResource> pollTemplateResource);
    /// <summary>
    /// Delete an existing poll
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The poll id</param>
    pplx::task<void> deletePoll(utility::string_t id);
    /// <summary>
    /// Delete a poll template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deletePollTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Get a single poll
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The poll id</param>
    pplx::task<std::shared_ptr<PollResource>> getPoll(utility::string_t id);
    /// <summary>
    /// Get poll answer
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The poll id</param>
    pplx::task<std::shared_ptr<PollResponseResource>> getPollAnswer(utility::string_t id);
    /// <summary>
    /// Get a single poll template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getPollTemplate(utility::string_t id);
    /// <summary>
    /// List and search poll templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getPollTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List and search polls
    /// </summary>
    /// <remarks>
    /// Get a list of polls with optional filtering. Assets will not be filled in on the resources returned. Use &#39;Get a single poll&#39; to retrieve the full resource with assets for a given item as needed.
    /// </remarks>
    /// <param name="filterCategory">Filter for polls from a specific category by id (optional)</param>/// <param name="filterTagset">Filter for polls with specified tags (separated by comma) (optional)</param>/// <param name="filterText">Filter for polls whose text contains a string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«PollResource»>> getPolls(utility::string_t filterCategory, utility::string_t filterTagset, utility::string_t filterText, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update an existing poll
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The poll id</param>/// <param name="pollResource">The poll object (optional)</param>
    pplx::task<std::shared_ptr<PollResource>> updatePoll(utility::string_t id, std::shared_ptr<PollResource> pollResource);
    /// <summary>
    /// Update a poll template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="pollTemplateResource">The poll template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updatePollTemplate(utility::string_t id, std::shared_ptr<TemplateResource> pollTemplateResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ContentPollsApi_H_ */

