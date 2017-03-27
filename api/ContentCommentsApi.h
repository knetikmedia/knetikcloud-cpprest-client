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
 * ContentCommentsApi.h
 *
 * 
 */

#ifndef ContentCommentsApi_H_
#define ContentCommentsApi_H_


#include "ApiClient.h"

#include "CommentResource.h"
#include "CommentSearch.h"
#include "PageResource«CommentResource».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  ContentCommentsApi
{
public:
    ContentCommentsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~ContentCommentsApi();
    /// <summary>
    /// Add a new comment
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="commentResource">The comment to be added (optional)</param>
    pplx::task<std::shared_ptr<CommentResource>> addComment(std::shared_ptr<CommentResource> commentResource);
    /// <summary>
    /// Delete a comment
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The comment id</param>
    pplx::task<void> deleteComment(int64_t id);
    /// <summary>
    /// Return a comment
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The comment id</param>
    pplx::task<std::shared_ptr<CommentResource>> getComment(int64_t id);
    /// <summary>
    /// Returns a page of comments
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="context">Get comments by context type</param>/// <param name="contextId">Get comments by context id</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«CommentResource»>> getComments(utility::string_t context, int32_t contextId, int32_t size, int32_t page);
    /// <summary>
    /// Search the comment index
    /// </summary>
    /// <remarks>
    /// The body is an ElasticSearch query json. Please see their &lt;a href&#x3D;&#39;https://www.elastic.co/guide/en/elasticsearch/reference/current/index.html&#39;&gt;documentation&lt;/a&gt; for details on the format and search options
    /// </remarks>
    /// <param name="query">The search query (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<CommentSearch>> searchComments(std::shared_ptr<Object> query, int32_t size, int32_t page);
    /// <summary>
    /// Update a comment
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The comment id</param>/// <param name="content">The comment content (optional)</param>
    pplx::task<void> updateComment(int64_t id, utility::string_t content);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ContentCommentsApi_H_ */

